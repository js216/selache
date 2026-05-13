// SPDX-License-Identifier: MIT
// cctest_csmith_4ae70072.c --- cctest case csmith_4ae70072 (csmith seed 1256652914)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xeee38162 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1256652914 -o /tmp/csmith_gen_uxu9aoe1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   int16_t  f3;
   const int8_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
   uint8_t  f1;
   struct S0  f2;
};


static int32_t g_17 = 0L;
static int64_t g_18 = (-8L);
static struct S0 g_24 = {0xF2E0L,0UL,0x5ABA9A98L,0x3657L,0x18L,0x70FC24489BE67E78LL};
static uint8_t g_79[3][4][3] = {{{0UL,7UL,0UL},{0UL,0UL,0xD6L},{0UL,0UL,254UL},{0UL,7UL,0UL}},{{0UL,0UL,0xD6L},{0UL,0UL,254UL},{0UL,7UL,0UL},{0UL,0UL,0xD6L}},{{0UL,0UL,254UL},{0UL,7UL,0UL},{0UL,0UL,0xD6L},{0UL,0UL,254UL}}};
static uint16_t g_124 = 0xCF24L;
static int16_t g_175 = (-1L);
static uint64_t g_176 = 0xE818B1E2C77FF3C2LL;



static int8_t  func_1(void);
static int32_t  func_2(union U1  p_3);
static union U1  func_4(int32_t  p_5, uint8_t  p_6);
static struct S0  func_7(int16_t  p_8, const struct S0  p_9);




static int8_t  func_1(void)
{ 
    uint16_t l_12 = 5UL;
    int32_t l_19 = 0xEBEC5EC6L;
    const struct S0 l_20 = {6L,0UL,0x2F1E5C8AL,0x2B4BL,0xA9L,0xEA445A8CCEDB7758LL};
    if (func_2(func_4((func_7((l_19 = (((0x161DL == l_12) , 0x0D01L) & ((safe_add_func_uint8_t_u_u(((g_17 = 0xD621L) & 0L), g_18)) < g_18))), l_20) , g_24.f5), l_20.f2)))
    { 
        uint32_t l_169[1];
        uint8_t l_174 = 0x04L;
        int i;
        for (i = 0; i < 1; i++)
            l_169[i] = 0UL;
        g_175 &= ((((((l_20 , g_24.f5) , (safe_div_func_uint8_t_u_u((g_24.f1 = (g_79[1][3][2] = l_169[0])), (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((1UL ^ g_24.f5), g_24.f2)) ^ l_20.f4) , g_18), g_18))))) != l_174) > 0x92L) < g_17) <= 18446744073709551615UL);
    }
    else
    { 
        g_176--;
    }
    return l_20.f2;
}



static int32_t  func_2(union U1  p_3)
{ 
    uint8_t l_127 = 1UL;
    int32_t l_142 = 0x88B34D06L;
    int32_t l_145 = (-7L);
    l_127 = (-1L);
    for (p_3.f2.f5 = 0; (p_3.f2.f5 != 0); p_3.f2.f5 = safe_add_func_int16_t_s_s(p_3.f2.f5, 8))
    { 
        int32_t l_144 = 0L;
        uint8_t l_146 = 254UL;
        for (g_24.f5 = 0; (g_24.f5 == 19); g_24.f5 = safe_add_func_int16_t_s_s(g_24.f5, 2))
        { 
            int32_t l_140 = 1L;
            int32_t l_141 = 0xA174F72EL;
            l_142 |= (l_141 = (safe_sub_func_int8_t_s_s(p_3.f0, (safe_sub_func_int64_t_s_s((g_18 = (((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(1UL, 0xAF42L)) || (l_140 &= 1L)), 2L)) <= (-1L)) == l_141)), 1L)))));
        }
        if (p_3.f0)
            continue;
        for (g_24.f3 = 0; (g_24.f3 <= 2); g_24.f3 += 1)
        { 
            int32_t l_143[4];
            int32_t l_149 = 0x2FCB6F9DL;
            uint32_t l_150 = 3UL;
            int i;
            for (i = 0; i < 4; i++)
                l_143[i] = 1L;
            --l_146;
            --l_150;
            for (l_127 = 0; (l_127 <= 2); l_127 += 1)
            { 
                int i, j, k;
                l_149 = (safe_sub_func_int64_t_s_s(((((safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(((g_79[g_24.f3][l_127][l_127] <= ((((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_79[l_127][(g_24.f3 + 1)][g_24.f3], 0xF67D394CL)), 0L)), 0xBFL)) || (-1L)) == g_79[l_127][(l_127 + 1)][g_24.f3]) == g_24.f0)) | p_3.f1), 0)) ^ l_146), 0x336FL)) > 3UL) > (-3L)) || p_3.f0), g_24.f4));
            }
        }
    }
    return l_142;
}



static union U1  func_4(int32_t  p_5, uint8_t  p_6)
{ 
    uint32_t l_32[2][5] = {{0xBB6AF833L,18446744073709551615UL,0xD28BC130L,18446744073709551615UL,0xBB6AF833L},{0xBB6AF833L,18446744073709551615UL,0xD28BC130L,18446744073709551615UL,0xBB6AF833L}};
    uint8_t l_52 = 0x39L;
    int16_t l_73 = 0L;
    const union U1 l_92 = {-5L};
    int32_t l_96 = (-3L);
    uint8_t l_122 = 0x27L;
    int i, j;
    for (g_24.f3 = 1; (g_24.f3 >= 0); g_24.f3 -= 1)
    { 
        uint32_t l_41 = 4294967295UL;
        union U1 l_46 = {4L};
        if ((safe_add_func_uint64_t_u_u(0x83A56CF6D70783DBLL, ((safe_sub_func_int16_t_s_s(((((((--p_6) , ((safe_rshift_func_int16_t_s_u(l_41, ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(p_6, (l_46 , 1UL))) , p_5), 8)) > (-1L)))) || g_24.f3)) && p_6) != 0x1A6545545654A137LL) <= p_5) || g_24.f4), 0x8C8EL)) != 1L))))
        { 
            int32_t l_51 = 3L;
            union U1 l_64 = {0xD7E08CD9L};
            if (p_5)
            { 
                int64_t l_59 = 0x845DB3902D8B6467LL;
                int64_t l_65 = 0xFF52682FBA83E1A6LL;
                g_17 = ((((safe_rshift_func_uint8_t_u_s(((l_51 |= (safe_add_func_uint16_t_u_u((p_5 || 0x66CAL), ((g_24.f2 == p_6) <= g_18)))) ^ l_32[1][4]), p_5)) >= l_46.f0) | p_5) | l_52);
                p_5 = ((safe_mul_func_uint16_t_u_u((g_24.f2 | (g_24.f0 = (((((l_59 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((0x6328DA4CL & 1L), 1)), 1))) , (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((l_64 , p_6) | p_5), p_5)) , 7L), g_24.f4))) < g_24.f5) <= p_6) & l_65))), 0x7B57L)) != 0x2AFE588526770660LL);
            }
            else
            { 
                uint32_t l_72[5] = {0xA50E62F1L,0xA50E62F1L,0xA50E62F1L,0xA50E62F1L,0xA50E62F1L};
                int i;
                p_5 = ((safe_add_func_int32_t_s_s(((((((func_7((((safe_sub_func_int64_t_s_s(p_5, (safe_add_func_uint16_t_u_u(0x31ABL, (l_72[2] = p_5))))) || 0xA94EL) || l_64.f1), g_24) , 0xEA07L) || p_5) | g_24.f4) & g_24.f5) == p_5) & l_73), g_24.f0)) == l_32[1][1]);
            }
            if ((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(p_6, g_24.f4)), 65534UL)))
            { 
                union U1 l_78 = {0L};
                return l_78;
            }
            else
            { 
                g_17 = l_41;
                ++g_79[2][3][2];
            }
        }
        else
        { 
            union U1 l_93 = {1L};
            uint32_t l_94 = 3UL;
            uint64_t l_97[2][3][2] = {{{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL}}};
            int32_t l_123 = 6L;
            int i, j, k;
            for (l_46.f2.f1 = 0; (l_46.f2.f1 <= 1); l_46.f2.f1 += 1)
            { 
                int32_t l_95 = 0x8B4E4A0AL;
                uint8_t l_98 = 1UL;
                int i, j;
                l_98 = (((safe_rshift_func_uint16_t_u_s((((((l_96 = ((p_5 <= 1UL) & (((safe_div_func_uint32_t_u_u(((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_79[0][3][2] = (((((l_92 , l_93) , l_94) && 1UL) > l_95) >= p_6)), g_24.f0)), 248UL)), p_6)) , p_6) , p_5) ^ 0x63695F89L), g_24.f5)) , 0xE7AC75E1L) , 0xFF97477CL))) != l_97[1][0][0]) > g_24.f3) > 0x62L) , p_5), p_5)) > l_94) <= p_5);
                if (l_93.f1)
                    continue;
            }
            g_17 ^= (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((l_96 ^= (safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(l_46.f1, (safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(0xD738L, ((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((l_123 = (safe_rshift_func_int8_t_s_s((g_24.f2 ^ ((safe_rshift_func_int8_t_s_s((~p_5), 4)) ^ l_46.f1)), l_122))), 6)), 0)) , p_6), p_6)) & 0x1128F678E9A5F1CALL) , p_5) <= (-1L)))) , p_5), 6)))) < 0L), g_18))) <= (-6L)), p_5)) || p_6), 4));
        }
    }
    --g_124;
    return l_92;
}



static struct S0  func_7(int16_t  p_8, const struct S0  p_9)
{ 
    int32_t l_30[1];
    uint32_t l_31 = 0xAD8BE776L;
    int i;
    for (i = 0; i < 1; i++)
        l_30[i] = 1L;
    for (g_18 = 27; (g_18 < (-9)); g_18 = safe_sub_func_uint16_t_u_u(g_18, 1))
    { 
        int32_t l_23[2];
        int i;
        for (i = 0; i < 2; i++)
            l_23[i] = 0xB4448110L;
        for (g_17 = 1; (g_17 >= 0); g_17 -= 1)
        { 
            return g_24;
        }
    }
    l_30[0] = (p_8 , ((safe_sub_func_int8_t_s_s((((-7L) | 0UL) & ((~(safe_add_func_uint8_t_u_u((p_9.f2 ^ 4294967292UL), g_24.f4))) | 0xC4L)), p_9.f2)) | p_9.f1));
    l_31 &= p_9.f2;
    return g_24;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_24.f5, "g_24.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_79[i][j][k], "g_79[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
