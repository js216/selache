// SPDX-License-Identifier: MIT
// cctest_csmith_2a58f4b1.c --- cctest case csmith_2a58f4b1 (csmith seed 710472881)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb6a5c6d8 */

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

// Options:   -s 710472881 -o /tmp/csmith_gen_dh2ljik3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   uint64_t  f1;
   uint64_t  f2;
   int16_t  f3;
   const uint32_t  f4;
   const int32_t  f5;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
   uint64_t  f1;
   const int32_t  f2;
};


static int32_t g_2 = 3L;
static int32_t g_6 = 0x0DE9BF9FL;
static uint16_t g_23 = 0xADC1L;
static union U2 g_25[3][4][1] = {{{{-1L}},{{-8L}},{{0L}},{{0L}}},{{{-8L}},{{-1L}},{{-8L}},{{0L}}},{{{0L}},{{-8L}},{{-1L}},{{-8L}}}};
static uint16_t g_32 = 0UL;
static int32_t g_48 = (-1L);
static uint32_t g_69 = 0xFA89BF98L;
static int32_t g_135 = 0x4EEBD0F6L;
static int32_t g_136 = 0x1ECA23E1L;
static uint32_t g_138 = 1UL;
static struct S0 g_163[4] = {{0x29L,0x583291AC2CD0B651LL,18446744073709551615UL,0xF8D7L,4294967291UL,0L},{0x29L,0x583291AC2CD0B651LL,18446744073709551615UL,0xF8D7L,4294967291UL,0L},{0x29L,0x583291AC2CD0B651LL,18446744073709551615UL,0xF8D7L,4294967291UL,0L},{0x29L,0x583291AC2CD0B651LL,18446744073709551615UL,0xF8D7L,4294967291UL,0L}};
static uint64_t g_175 = 0xFB3F184A610A40B4LL;
static uint16_t g_178 = 7UL;
static int8_t g_188 = 0x5FL;



static union U2  func_1(void);
static uint8_t  func_11(uint16_t  p_12, int32_t  p_13);
static union U2  func_33(int8_t  p_34, uint32_t  p_35, int64_t  p_36);
static int32_t  func_72(const int32_t  p_73, uint32_t  p_74, int32_t  p_75);




static union U2  func_1(void)
{ 
    int32_t l_31 = 0x8AD385E3L;
    const int8_t l_186 = 0xACL;
    for (g_2 = 29; (g_2 > 12); --g_2)
    { 
        int32_t l_5[3];
        int32_t l_21 = 0xCADFB1AFL;
        uint16_t l_24 = 0xC51AL;
        int i;
        for (i = 0; i < 3; i++)
            l_5[i] = (-1L);
        for (g_6 = 0; (g_6 <= 2); g_6 += 1)
        { 
            uint8_t l_39[1];
            int i;
            for (i = 0; i < 1; i++)
                l_39[i] = 0UL;
            if ((safe_rshift_func_int8_t_s_u(l_5[g_6], 0)))
            { 
                int8_t l_22 = 0x86L;
                int i;
                l_24 ^= (l_5[g_6] == (65529UL > ((((func_11(g_6, (((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((+(l_21 = ((l_5[g_6] == g_2) != l_5[g_6]))), l_22)), g_2)), l_5[g_6])) <= 0xCF687292L) , l_5[g_6])) , 0xE834AB462A77B69CLL) || 0x731E7BF5CBF7935DLL) > 1L) ^ g_2)));
                return g_25[1][1][0];
            }
            else
            { 
                int32_t l_28[3][1][4] = {{{0L,0L,0L,0L}},{{0L,0L,0L,0L}},{{0L,0L,0L,0L}}};
                int i, j, k;
                g_32 |= (((safe_lshift_func_uint16_t_u_u((l_28[0][0][3] >= (l_28[0][0][3] < (18446744073709551615UL <= (safe_mul_func_int16_t_s_s(((0x0F83L | l_21) ^ g_2), 0x8CDAL))))), 0)) <= (-1L)) , l_31);
            }
            l_5[2] = (func_33((0xA6DAD3F0L < ((((l_31 ^= func_11((0xFD20L == ((-1L) == (func_11((g_23 |= l_39[0]), g_32) , 0x0D4BL))), g_25[1][1][0].f2)) | 65535UL) != g_25[1][1][0].f2) , (-1L))), l_21, g_6) , 0x51B70F82L);
        }
        for (g_48 = 0; (g_48 <= 2); g_48 += 1)
        { 
            int8_t l_54 = 0x84L;
            int i;
            l_5[g_48] = ((safe_mod_func_uint16_t_u_u((g_23--), (~l_54))) && g_32);
            if (g_25[1][1][0].f1)
            { 
                g_6 = (safe_lshift_func_uint8_t_u_s((!0L), 7));
            }
            else
            { 
                uint8_t l_60 = 252UL;
                int32_t l_66 = (-3L);
                uint8_t l_67[2];
                int32_t l_68[4][1];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_67[i] = 0x57L;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_68[i][j] = 1L;
                }
                l_68[0][0] = (safe_div_func_uint32_t_u_u(l_60, (safe_unary_minus_func_int32_t_s((((safe_sub_func_int8_t_s_s((l_60 && l_60), (((safe_lshift_func_uint8_t_u_u((l_67[1] = (l_66 = l_60)), l_31)) && 0xFDD8L) && 6L))) , g_23) , l_67[0])))));
                if (g_23)
                    continue;
                --g_69;
            }
            if (func_72(l_31, ((l_21 &= (g_23++)) < (safe_add_func_uint8_t_u_u((~(safe_div_func_uint64_t_u_u((l_24 >= ((((((l_24 | (safe_rshift_func_int16_t_s_u(2L, l_24))) != g_69) | l_5[2]) <= l_5[0]) <= 0UL) != 18446744073709551612UL)), l_5[2]))), 1L))), g_25[1][1][0].f2))
            { 
                uint32_t l_141 = 0UL;
                l_141--;
                if (g_135)
                    break;
                g_6 |= ((((((safe_div_func_int8_t_s_s(g_69, l_5[g_48])) , (g_25[1][1][0].f1 &= 0UL)) != (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0x3FB5L, l_141)), g_32))) == l_31) | (-1L)) >= 0x3BL);
            }
            else
            { 
                int32_t l_157 = 0xD604849EL;
                int32_t l_158[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                int i, j;
                l_158[1][1] = (((safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(0xABL, (((+(l_157 = ((0x297EED7DL | g_135) < (safe_add_func_int16_t_s_s(l_5[g_48], 0xA32FL))))) >= g_135) , g_2))) , (-1L)) || 0x81D41956CB911F2ALL), 7)) && g_138) == l_54);
            }
        }
        if (g_32)
        { 
            g_6 = (safe_add_func_uint64_t_u_u(0x9ED89A75344A4BF2LL, g_25[1][1][0].f0));
        }
        else
        { 
            int32_t l_172[1][5];
            uint8_t l_187 = 248UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_172[i][j] = (-1L);
            }
            for (g_48 = 0; (g_48 == 12); ++g_48)
            { 
                int8_t l_174 = 0L;
                g_175 = (g_6 = (((((((g_163[0] , ((((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0L, l_172[0][0])), (!(((l_174 && g_25[1][1][0].f1) >= (-1L)) && g_23)))), 0xE2L)), g_163[0].f3)) & l_172[0][4]) > g_163[0].f1) , 5L)) , 0x2181L) && l_31) == l_31) != g_2) <= 1UL) , g_48));
            }
            if (((safe_mul_func_int8_t_s_s((g_163[0].f5 , (g_178 <= (safe_lshift_func_uint8_t_u_s((g_178 && (safe_add_func_int64_t_s_s(l_172[0][0], g_32))), 6)))), 0x4FL)) < g_163[0].f4))
            { 
                l_21 = 0xE90F11B2L;
            }
            else
            { 
                uint32_t l_183 = 4294967286UL;
                l_31 = g_25[1][1][0].f1;
                g_6 = l_183;
                g_188 |= ((safe_add_func_uint16_t_u_u(l_183, (l_186 , (l_187 &= g_6)))) < ((g_163[0].f5 || l_31) || 7L));
            }
        }
    }
    l_31 ^= g_2;
    return g_25[1][3][0];
}



static uint8_t  func_11(uint16_t  p_12, int32_t  p_13)
{ 
    g_23 |= p_13;
    return p_13;
}



static union U2  func_33(int8_t  p_34, uint32_t  p_35, int64_t  p_36)
{ 
    uint32_t l_40[2];
    int16_t l_45 = 4L;
    uint8_t l_46 = 0x13L;
    int32_t l_47 = 0xDC493A78L;
    int i;
    for (i = 0; i < 2; i++)
        l_40[i] = 0x964B5AD8L;
    g_48 &= ((l_40[0] <= (l_47 = (safe_mul_func_uint16_t_u_u(((p_34 = (safe_sub_func_uint32_t_u_u(((l_45 == 0xB7B3FA8726ABE926LL) < (l_46 <= l_40[0])), g_25[1][1][0].f0))) > p_36), p_36)))) , p_34);
    return g_25[1][0][0];
}



static int32_t  func_72(const int32_t  p_73, uint32_t  p_74, int32_t  p_75)
{ 
    uint64_t l_102[4][3][3] = {{{0xD0913F082F4DE99ELL,0xCB0868ECCAC47384LL,0xD0913F082F4DE99ELL},{18446744073709551615UL,18446744073709551611UL,0xEE8C007EE7193220LL},{0xD0913F082F4DE99ELL,1UL,18446744073709551611UL}},{{18446744073709551615UL,0xEE8C007EE7193220LL,2UL},{0x649A3464756850E2LL,0xD0913F082F4DE99ELL,0x0AB3BAA24DD39D0ELL},{2UL,0xEBF557C78B2DF22ALL,0UL}},{{0x649A3464756850E2LL,0x96EF039836713F97LL,0x649A3464756850E2LL},{2UL,18446744073709551615UL,0x414AAF7677910A93LL},{0x649A3464756850E2LL,18446744073709551611UL,0xED0B757F9C6BD3C7LL}},{{2UL,0xEE8C007EE7193220LL,2UL},{0x649A3464756850E2LL,0xD0913F082F4DE99ELL,0x0AB3BAA24DD39D0ELL},{2UL,0xEBF557C78B2DF22ALL,0UL}}};
    int32_t l_103 = (-1L);
    int32_t l_137[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_137[i] = 1L;
    if (p_73)
    { 
        const int8_t l_110 = 0x8BL;
        int32_t l_119 = (-1L);
        int32_t l_122 = (-9L);
        g_6 = (l_103 = ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((~(safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_add_func_uint64_t_u_u(p_75, 1UL)))), (((!(safe_div_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(g_32, 1L)) , g_48), g_23))) && p_75) != g_25[1][1][0].f2))), 0x8EBBL))) , g_25[1][1][0].f2), p_75)) | p_75), g_32)) | l_102[2][0][1]));
        for (p_74 = 0; (p_74 >= 53); p_74 = safe_add_func_int16_t_s_s(p_74, 2))
        { 
            int64_t l_111 = 0xF990685852762AA9LL;
            l_111 = (((safe_sub_func_int64_t_s_s(p_75, ((g_25[1][1][0].f1 = (safe_div_func_uint8_t_u_u((g_25[1][1][0].f0 , 0xD0L), 0x0CL))) | (-2L)))) || g_32) ^ l_110);
            l_122 ^= (safe_div_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s((l_111 , ((safe_lshift_func_int8_t_s_s(6L, (l_119 = (!p_74)))) ^ (safe_mod_func_int32_t_s_s(p_73, g_2)))), l_111)) ^ g_48) , l_102[2][0][1]), l_102[2][0][1]));
        }
    }
    else
    { 
        int16_t l_123 = 1L;
        int32_t l_134 = 9L;
        for (p_74 = 0; (p_74 <= 2); p_74 += 1)
        { 
            l_123 = (-4L);
            for (g_32 = 0; (g_32 <= 2); g_32 += 1)
            { 
                g_6 = p_73;
                g_6 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((0xE71340892DF0D848LL && (safe_add_func_int8_t_s_s(0x4AL, (((l_103 < g_69) || g_25[1][1][0].f0) , 0x47L)))) | 0x77F4L), 2)), g_69));
            }
        }
        l_134 &= (safe_sub_func_uint32_t_u_u((0L && l_102[2][0][1]), (((safe_rshift_func_uint16_t_u_s(0x9EA3L, (l_102[2][1][2] <= 0x27AEB4D02DCD109CLL))) , g_48) != 0UL)));
        l_103 = 0xA128892BL;
    }
    g_138--;
    return g_2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_25[i][j][k].f0, "g_25[i][j][k].f0", print_hash_value);
                transparent_crc(g_25[i][j][k].f1, "g_25[i][j][k].f1", print_hash_value);
                transparent_crc(g_25[i][j][k].f2, "g_25[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_163[i].f0, "g_163[i].f0", print_hash_value);
        transparent_crc(g_163[i].f1, "g_163[i].f1", print_hash_value);
        transparent_crc(g_163[i].f2, "g_163[i].f2", print_hash_value);
        transparent_crc(g_163[i].f3, "g_163[i].f3", print_hash_value);
        transparent_crc(g_163[i].f4, "g_163[i].f4", print_hash_value);
        transparent_crc(g_163[i].f5, "g_163[i].f5", print_hash_value);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
