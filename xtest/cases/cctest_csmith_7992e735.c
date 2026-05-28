// SPDX-License-Identifier: MIT
// cctest_csmith_7992e735.c --- cctest case csmith_7992e735 (csmith seed 2039670581)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7f69cc0a */
/* @exp_ticks 0x65d6 */

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

// Options:   -s 2039670581 -o /tmp/csmith_gen_fe2lgo0f/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   int8_t  f1;
   const uint8_t  f2;
   uint32_t  f3;
   int16_t  f4;
   uint64_t  f5;
   uint64_t  f6;
   uint8_t  f7;
};
#pragma pack(pop)

struct S1 {
   int64_t  f0;
   int64_t  f1;
   uint16_t  f2;
   const uint64_t  f3;
};

union U2 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   const uint64_t  f3;
};

union U3 {
   uint16_t  f0;
   const struct S1  f1;
   int32_t  f2;
};

union U4 {
   uint16_t  f0;
   int32_t  f1;
};

union U5 {
   struct S1  f0;
};


static int32_t g_2 = 0x5AF8B513L;
static uint32_t g_6 = 0x1647C2C9L;
static int32_t g_8[6] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
static union U5 g_16 = {{0x9BB7A14055248722LL,0xB16AAC8953526C71LL,6UL,0x3F08700D35DA2A0CLL}};
static uint16_t g_66[5] = {0x0646L,0x0646L,0x0646L,0x0646L,0x0646L};
static int8_t g_69[6] = {1L,1L,1L,1L,1L,1L};
static union U5 *g_93[3] = {&g_16,&g_16,&g_16};
static union U5 ** const g_92[7][4] = {{(void*)0,&g_93[1],&g_93[0],&g_93[1]},{&g_93[1],(void*)0,(void*)0,&g_93[0]},{&g_93[1],(void*)0,(void*)0,&g_93[1]},{(void*)0,&g_93[1],&g_93[1],(void*)0},{(void*)0,&g_93[1],(void*)0,(void*)0},{&g_93[1],(void*)0,(void*)0,(void*)0},{&g_93[1],&g_93[1],&g_93[1],(void*)0}};
static uint32_t g_98 = 0UL;
static int32_t g_103[5] = {0x913691F7L,0x913691F7L,0x913691F7L,0x913691F7L,0x913691F7L};
static int32_t g_106 = 7L;
static int64_t g_108 = 0x45ED7233D1AAC1EFLL;
static uint8_t g_120 = 0x54L;
static uint32_t g_126 = 0xD72C8AEEL;
static int32_t g_127 = 0xABF03985L;
static uint32_t *g_135 = (void*)0;
static uint32_t * const *g_134 = &g_135;
static int16_t g_157 = (-2L);
static int32_t *g_180 = &g_103[0];
static int32_t **g_179[2] = {&g_180,&g_180};
static union U2 g_188 = {0L};
static uint32_t g_329 = 0x55F27285L;
static uint8_t g_340 = 0xBDL;
static struct S0 g_382 = {0x451BF939L,0x47L,1UL,18446744073709551612UL,0L,0x3DB43DAF746BDAE4LL,0x31938AE137F43444LL,9UL};
static int64_t *g_461 = &g_16.f0.f1;
static int64_t *g_465[5][5][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&g_16.f0.f0},{(void*)0,&g_108,&g_16.f0.f0,(void*)0,&g_16.f0.f0},{&g_108,&g_16.f0.f1,&g_16.f0.f1,(void*)0,(void*)0},{&g_108,&g_108,&g_16.f0.f1,(void*)0,&g_16.f0.f1},{&g_16.f0.f0,&g_16.f0.f0,&g_108,&g_108,&g_16.f0.f1}},{{&g_16.f0.f1,&g_16.f0.f0,(void*)0,&g_16.f0.f0,(void*)0},{(void*)0,(void*)0,&g_16.f0.f1,&g_16.f0.f1,(void*)0},{(void*)0,&g_16.f0.f0,&g_16.f0.f0,&g_16.f0.f1,&g_16.f0.f0},{&g_16.f0.f1,&g_16.f0.f0,(void*)0,&g_16.f0.f1,(void*)0},{&g_16.f0.f1,&g_108,&g_16.f0.f1,&g_108,&g_108}},{{(void*)0,&g_16.f0.f1,&g_108,(void*)0,&g_108},{&g_108,&g_108,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_108,&g_16.f0.f0},{&g_16.f0.f1,(void*)0,&g_16.f0.f0,&g_108,(void*)0},{&g_16.f0.f1,&g_16.f0.f1,&g_108,(void*)0,(void*)0}},{{&g_108,&g_16.f0.f0,&g_16.f0.f0,(void*)0,&g_16.f0.f1},{(void*)0,(void*)0,(void*)0,&g_108,&g_16.f0.f1},{&g_16.f0.f0,&g_16.f0.f0,(void*)0,(void*)0,(void*)0},{&g_16.f0.f0,&g_16.f0.f1,&g_108,(void*)0,&g_16.f0.f0},{&g_16.f0.f0,(void*)0,&g_16.f0.f1,&g_108,&g_16.f0.f0}},{{&g_16.f0.f0,(void*)0,(void*)0,&g_16.f0.f0,&g_16.f0.f1},{(void*)0,(void*)0,&g_16.f0.f0,&g_16.f0.f0,&g_108},{&g_108,&g_108,&g_16.f0.f1,&g_16.f0.f0,&g_16.f0.f1},{&g_16.f0.f1,&g_108,(void*)0,&g_16.f0.f0,&g_108},{&g_16.f0.f1,&g_108,&g_108,&g_16.f0.f0,&g_16.f0.f0}}};
static int64_t *g_466 = &g_108;
static struct S0 g_489 = {0x7B4F858AL,0L,1UL,0xED010F55L,1L,0xDE9BF7883952FDB3LL,0x4FFF85FDEFFDB15ELL,250UL};
static int16_t g_532 = 0x62A6L;
static union U3 g_543 = {65528UL};
static struct S0 g_555 = {0x22BC9D42L,0xA3L,0xCDL,0UL,5L,18446744073709551609UL,0x4C8948D597F0559ALL,0UL};
static struct S0 *g_554 = &g_555;
static union U5 g_558 = {{0L,1L,4UL,0x6C053D35AD8F05D6LL}};
static uint64_t *g_563 = &g_555.f5;
static uint64_t **g_562 = &g_563;
static union U4 g_568 = {1UL};
static uint8_t *g_611[1][1] = {{&g_120}};
static uint8_t **g_610 = &g_611[0][0];
static const union U5 *g_614 = &g_16;
static const union U5 **g_613 = &g_614;
static union U3 g_646 = {0UL};
static union U5 ***g_711 = (void*)0;
static union U5 **g_714 = &g_93[2];
static union U5 ***g_713[5][4][3] = {{{&g_714,&g_714,(void*)0},{&g_714,(void*)0,&g_714},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_714,&g_714}},{{&g_714,(void*)0,(void*)0},{&g_714,&g_714,&g_714},{&g_714,(void*)0,(void*)0},{&g_714,(void*)0,&g_714}},{{(void*)0,(void*)0,&g_714},{&g_714,&g_714,&g_714},{(void*)0,(void*)0,&g_714},{&g_714,&g_714,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&g_714,(void*)0,&g_714},{(void*)0,&g_714,&g_714},{&g_714,&g_714,&g_714}},{{&g_714,&g_714,(void*)0},{&g_714,&g_714,(void*)0},{&g_714,&g_714,(void*)0},{&g_714,(void*)0,&g_714}}};
static union U3 *g_723[5][4] = {{&g_646,&g_646,&g_646,&g_646},{&g_646,&g_646,&g_646,&g_646},{&g_646,&g_646,&g_646,&g_646},{&g_646,&g_646,&g_646,&g_646},{&g_646,&g_646,&g_646,&g_646}};
static union U3 **g_722 = &g_723[1][1];
static uint16_t *g_830 = &g_543.f0;
static uint16_t **g_829 = &g_830;
static const uint16_t **g_831 = (void*)0;
static union U4 *g_891 = &g_568;
static uint16_t g_1107 = 0x0FC7L;
static struct S1 *g_1118 = &g_558.f0;
static const int16_t * const *g_1134 = (void*)0;
static union U5 g_1159 = {{1L,0x0C48E9F922121CA9LL,4UL,0x078FA77E582C32CFLL}};
static uint16_t g_1194 = 8UL;
static const int8_t **g_1212[1][2] = {{(void*)0,(void*)0}};
static const int8_t g_1215[1] = {(-8L)};
static uint16_t ***g_1391 = (void*)0;
static int16_t *g_1413 = &g_382.f4;
static int16_t **g_1412 = &g_1413;
static int16_t ***g_1411 = &g_1412;
static uint32_t *g_1467 = &g_98;
static int64_t g_1469[2] = {0L,0L};
static int8_t g_1480 = 0x90L;
static struct S1 g_1519 = {-5L,0xE7F557D40DC69E1ELL,0UL,0x80F7B48D8DD60651LL};
static int8_t g_1536 = 7L;
static uint32_t g_1565 = 0xC926F097L;
static uint32_t **g_1572 = &g_1467;
static int64_t g_1589 = 0xEC6B6D6971900E16LL;
static union U5 g_1592 = {{0xAD297AAF2BCF1C32LL,0L,0xA225L,0x81B10331DF884F27LL}};
static int16_t g_1674 = 0xB045L;
static int64_t g_1737 = 0x4BA3FAFF211EF0F2LL;
static int16_t g_1744[6][6][2] = {{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}},{{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}}};
static int8_t g_1788 = 1L;
static union U3 g_1840 = {0x872AL};
static union U3 *g_1839 = &g_1840;
static int32_t *g_1841 = &g_2;
static int8_t *g_1853 = &g_69[4];
static int8_t **g_1852 = &g_1853;



static int32_t  func_1(void);
static union U5 ** func_20(union U4  p_21);
static const int64_t  func_23(struct S1  p_24, const int32_t  p_25, int64_t  p_26, uint32_t  p_27);
static int32_t ** func_29(int16_t  p_30, uint32_t * const  p_31, uint32_t * p_32, int8_t * p_33, union U5  p_34);
static union U2  func_42(uint32_t  p_43, uint64_t  p_44, union U4  p_45, union U2  p_46, union U5 * const * p_47);
static union U4  func_48(int8_t  p_49, union U5 * p_50, uint8_t  p_51);
static uint32_t  func_54(uint32_t * p_55, uint32_t  p_56, int8_t * p_57);
static int32_t  func_84(uint32_t * p_85, union U2  p_86, union U5 ** const  p_87, int32_t * p_88, int32_t * p_89);




static int32_t  func_1(void)
{ 
    int8_t l_9 = 1L;
    uint64_t l_1303[5] = {0x756C7BA4C79C235DLL,0x756C7BA4C79C235DLL,0x756C7BA4C79C235DLL,0x756C7BA4C79C235DLL,0x756C7BA4C79C235DLL};
    struct S1 l_1305 = {5L,0x1218D9418ABF0116LL,0xC037L,0x8A05BBC05F3D95A6LL};
    uint64_t l_1316 = 18446744073709551615UL;
    union U5 l_1325 = {{1L,0x0059508B3B840AD9LL,65535UL,18446744073709551615UL}};
    union U5 * const *l_1336 = (void*)0;
    int32_t l_1342 = (-6L);
    union U2 l_1358 = {0x18DE2493L};
    const struct S0 l_1394 = {-9L,-1L,0x94L,0xCA9EE1DBL,-1L,0x61CC966DAFE10943LL,0xD22EB5F96942CD12LL,0x64L};
    uint16_t l_1460 = 0xBAE5L;
    int32_t *l_1462 = &g_543.f2;
    int32_t l_1470 = 0x51A272F4L;
    int32_t l_1472 = 0x8C2EB6BCL;
    int32_t l_1474 = 7L;
    int32_t l_1478 = 0xFBCFA38FL;
    int32_t l_1479 = 0xCFC5D97BL;
    int32_t l_1481[4] = {0xF14E7290L,0xF14E7290L,0xF14E7290L,0xF14E7290L};
    const uint32_t *l_1506 = &g_126;
    const uint32_t **l_1505 = &l_1506;
    int8_t *l_1585[3];
    int8_t **l_1584 = &l_1585[0];
    int32_t l_1608 = 6L;
    uint32_t l_1609 = 3UL;
    int32_t *l_1623 = &g_127;
    int16_t l_1637 = 0x6F7AL;
    union U4 *l_1659 = &g_568;
    uint32_t l_1703[3];
    int16_t l_1734 = 0L;
    int32_t l_1735 = 0xF86D4156L;
    int32_t *l_1753 = &g_127;
    uint8_t l_1789 = 0x7EL;
    int64_t l_1806 = 0xA9D0127420EA1BCALL;
    const int8_t l_1826 = 0x06L;
    int32_t l_1867 = 0x2074A6A3L;
    int i;
    for (i = 0; i < 3; i++)
        l_1585[i] = &g_489.f1;
    for (i = 0; i < 3; i++)
        l_1703[i] = 0x547AB4C5L;
    for (g_2 = 0; (g_2 == 11); g_2 = safe_add_func_int32_t_s_s(g_2, 9))
    { 
        uint32_t *l_5 = &g_6;
        int32_t *l_7 = &g_8[3];
        union U5 *l_15 = &g_16;
        int32_t **l_19 = &l_7;
        if (((*l_7) = ((-1L) != (g_2 , ((*l_5) = 4294967291UL)))))
        { 
            int32_t l_10 = 3L;
            if (g_6)
                break;
            l_10 ^= l_9;
        }
        else
        { 
            for (g_6 = (-1); (g_6 == 35); g_6 = safe_add_func_int32_t_s_s(g_6, 8))
            { 
                for (l_9 = 0; (l_9 > (-28)); l_9 = safe_sub_func_uint64_t_u_u(l_9, 9))
                { 
                    union U5 **l_17 = (void*)0;
                    union U5 **l_18 = &l_15;
                    (*l_18) = l_15;
                }
                g_8[3] = 8L;
                (*l_7) |= g_2;
                if (g_2)
                    continue;
            }
        }
        (*l_19) = &g_2;
        return l_9;
    }
    for (g_16.f0.f2 = 0; (g_16.f0.f2 <= 5); g_16.f0.f2 += 1)
    { 
        int8_t *l_22 = &l_9;
        struct S1 l_28 = {-7L,0xD8AC507B3925B974LL,65535UL,0xEC7A429ADBD3D38ELL};
        union U5 ***l_1297 = (void*)0;
        union U5 ***l_1298 = &g_714;
        union U3 l_1301 = {65534UL};
        int16_t *l_1304 = &g_157;
        union U2 l_1306 = {0xF6CDDC74L};
        int16_t *l_1315[3][5] = {{&g_532,&g_489.f4,&g_489.f4,&g_532,&g_489.f4},{&g_532,&g_532,&g_555.f4,&g_532,&g_532},{&g_489.f4,&g_532,&g_489.f4,&g_489.f4,&g_532}};
        uint32_t l_1379[2];
        struct S1 *l_1382 = &l_1325.f0;
        int16_t l_1385 = 0x3C98L;
        struct S0 l_1443 = {3L,0xFDL,0x6CL,0x04258E60L,0xA1A1L,1UL,18446744073709551615UL,0x6CL};
        int32_t l_1475 = 0x672F86F9L;
        int32_t l_1476 = 0x16181EC1L;
        int32_t l_1477 = 2L;
        int32_t l_1485 = 0L;
        int32_t l_1486[7][7];
        int32_t l_1503 = 1L;
        uint32_t **l_1504 = (void*)0;
        uint8_t **l_1524 = &g_611[0][0];
        uint32_t l_1548 = 0UL;
        int8_t l_1588 = 0xA6L;
        union U4 l_1616[6][1][7] = {{{{0xAB17L},{0xC8C7L},{0UL},{0UL},{0xC8C7L},{0xAB17L},{6UL}}},{{{1UL},{0xC6F5L},{0xD8E1L},{0xD8E1L},{0xC6F5L},{1UL},{0xF357L}}},{{{0xAB17L},{0xC8C7L},{0UL},{0UL},{0xC8C7L},{0xAB17L},{6UL}}},{{{1UL},{0xC6F5L},{0xD8E1L},{0xD8E1L},{0xC6F5L},{1UL},{0xF357L}}},{{{0xAB17L},{0xC8C7L},{0UL},{0UL},{0xC8C7L},{0xAB17L},{6UL}}},{{{1UL},{0xC6F5L},{0xD8E1L},{0xD8E1L},{0xC6F5L},{1UL},{0xF357L}}}};
        uint64_t l_1641 = 0xEF96EF9C80824C89LL;
        uint8_t l_1662[2];
        const int8_t ***l_1692 = &g_1212[0][0];
        uint16_t l_1700 = 65535UL;
        const uint64_t l_1725 = 1UL;
        int32_t l_1740 = 0x816F9518L;
        int16_t l_1745 = 0x1CC2L;
        union U5 **l_1764 = &g_93[0];
        uint64_t l_1790 = 0x8872FA4AD744D028LL;
        int16_t l_1836 = 0x1586L;
        int8_t l_1894 = 0L;
        int64_t l_1895 = 0x831412115AF14B1FLL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1379[i] = 0UL;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 7; j++)
                l_1486[i][j] = 0x8FE328E8L;
        }
        for (i = 0; i < 2; i++)
            l_1662[i] = 8UL;
    }
    (*l_1462) = ((*l_1623) || (((*g_466) < (safe_rshift_func_uint8_t_u_s((0xA13A27DD60BB7073LL & (*l_1753)), (*g_1853)))) <= (0UL == (((((*g_830) && 0xDC3CL) , 1L) , (*g_466)) ^ (**g_562)))));
    return (*g_180);
}



static union U5 ** func_20(union U4  p_21)
{ 
    uint16_t l_921 = 0xF4BFL;
    union U5 **l_959 = &g_93[1];
    int32_t *l_962 = &g_543.f2;
    int32_t l_979[1];
    union U2 * const l_1037 = &g_188;
    int16_t l_1062 = 0L;
    uint16_t *** const l_1116 = &g_829;
    const int16_t * const l_1132[4][3][4] = {{{(void*)0,&l_1062,&g_489.f4,&l_1062},{&g_555.f4,&g_382.f4,(void*)0,&l_1062},{(void*)0,(void*)0,&g_382.f4,(void*)0}},{{&g_382.f4,&g_382.f4,&g_489.f4,&g_555.f4},{&g_157,&l_1062,&g_382.f4,&g_157},{&l_1062,(void*)0,&l_1062,&g_489.f4}},{{&l_1062,(void*)0,&g_555.f4,(void*)0},{&g_555.f4,&g_489.f4,&g_382.f4,&g_382.f4},{&g_382.f4,&g_382.f4,&g_382.f4,&g_489.f4}},{{&g_489.f4,&g_555.f4,&l_1062,&g_382.f4},{(void*)0,&l_1062,&g_382.f4,&l_1062},{&g_382.f4,&l_1062,(void*)0,&g_382.f4}}};
    const int16_t * const *l_1131 = &l_1132[1][2][0];
    int32_t * const *l_1161 = &g_180;
    int32_t * const **l_1160 = &l_1161;
    struct S1 *l_1162 = &g_1159.f0;
    union U5 ****l_1163 = &g_713[4][2][0];
    int8_t l_1169 = 1L;
    union U3 **l_1173 = &g_723[2][2];
    struct S0 *l_1174 = (void*)0;
    union U5 **l_1197 = &g_93[0];
    int8_t *l_1222 = &g_382.f1;
    int8_t **l_1221 = &l_1222;
    int64_t l_1239[3][3][3];
    uint32_t l_1246[5][5][4] = {{{4294967295UL,0x78EF81E5L,8UL,0x3D7F4F11L},{8UL,4294967286UL,0x458C7396L,0x35BDBCC7L},{1UL,0x12DC1AB3L,0x78EF81E5L,0xD18107ABL},{2UL,4294967295UL,2UL,0UL},{0xED3FB5B8L,1UL,4294967295UL,8UL}},{{0xFEC13B1AL,0x8A2E8867L,0x35BDBCC7L,1UL},{0x4F72363EL,0x8842E6F7L,0x35BDBCC7L,0xFEC13B1AL},{0xFEC13B1AL,0UL,4294967295UL,0x79987212L},{0xED3FB5B8L,0x501E7C4FL,2UL,3UL},{2UL,3UL,0x78EF81E5L,0UL}},{{1UL,0x4F72363EL,0x458C7396L,0x458C7396L},{8UL,8UL,8UL,0x501E7C4FL},{4294967295UL,0UL,0x756E0C1DL,0x78EF81E5L},{0x501E7C4FL,0x79987212L,0x3D7F4F11L,0x756E0C1DL},{8UL,0x79987212L,0x8842E6F7L,0x78EF81E5L}},{{0x79987212L,0UL,0x4F72363EL,0x501E7C4FL},{0xFAA75FFCL,8UL,4294967286UL,0x458C7396L},{0x3D7F4F11L,0x4F72363EL,0xD18107ABL,0UL},{4294967286UL,3UL,0xED3FB5B8L,3UL},{0x756E0C1DL,0x501E7C4FL,0UL,0x79987212L}},{{0x99150515L,0UL,0x12DC1AB3L,0xFEC13B1AL},{3UL,0x8842E6F7L,4294967295UL,1UL},{3UL,0x8A2E8867L,0x12DC1AB3L,8UL},{0x99150515L,1UL,0UL,0UL},{0x756E0C1DL,4294967295UL,0xED3FB5B8L,0xD18107ABL}}};
    uint8_t ***l_1253[4];
    uint64_t **l_1270 = &g_563;
    int16_t **l_1285 = (void*)0;
    int16_t ***l_1286 = &l_1285;
    int32_t l_1295 = 0L;
    uint8_t l_1296 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_979[i] = 1L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_1239[i][j][k] = 0xE6F7A931C7D3B0FFLL;
        }
    }
    for (i = 0; i < 4; i++)
        l_1253[i] = &g_610;
    for (g_489.f3 = 0; (g_489.f3 >= 13); g_489.f3++)
    { 
        int32_t *l_915 = &g_103[2];
        int32_t l_916 = 0x384A6338L;
        int32_t *l_917 = &g_646.f2;
        int32_t *l_918 = (void*)0;
        int32_t l_919 = 0x3D43AB81L;
        int32_t *l_920[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_945 = 0x93FBE3E1L;
        union U5 l_946 = {{0x046042B328F09746LL,0x502114627A11C809LL,65535UL,18446744073709551610UL}};
        uint64_t ***l_964 = &g_562;
        union U5 **l_970 = &g_93[1];
        int i;
        ++l_921;
        if (((~(safe_add_func_int16_t_s_s((g_6 , ((void*)0 == (*g_134))), (safe_mod_func_int16_t_s_s(p_21.f0, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((65527UL < 0x86AFL), (*g_563))), g_382.f5)) >= 0xB85139EDL), (**g_610)))))))) == p_21.f0))
        { 
            int16_t l_940 = 0x8021L;
            union U5 l_947 = {{-4L,4L,0xA483L,1UL}};
            uint16_t *** const l_954 = &g_829;
            for (p_21.f0 = (-20); (p_21.f0 == 37); p_21.f0 = safe_add_func_int32_t_s_s(p_21.f0, 3))
            { 
                uint32_t l_939[5][6][3];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_939[i][j][k] = 0x8E2209CEL;
                    }
                }
                (*g_180) = (((safe_mod_func_uint64_t_u_u((l_939[2][2][1] & 0UL), ((--(**g_829)) || (safe_add_func_uint32_t_u_u(l_945, (l_946 , (*g_180))))))) < (l_947 , (safe_mod_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(p_21.f0, 0x688D8A1AL)) , p_21.f0), l_947.f0.f3)))) != l_921);
                for (l_947.f0.f1 = (-28); (l_947.f0.f1 < (-9)); l_947.f0.f1++)
                { 
                    uint16_t ****l_955 = (void*)0;
                    uint16_t ***l_957 = &g_829;
                    uint16_t ****l_956[6] = {&l_957,&l_957,&l_957,&l_957,&l_957,&l_957};
                    uint16_t ****l_958 = &l_957;
                    int i;
                    (*l_958) = l_954;
                    return l_959;
                }
            }
        }
        else
        { 
            int32_t *l_960 = (void*)0;
            int32_t **l_961[5][3] = {{&l_915,(void*)0,&l_915},{&l_915,(void*)0,&l_915},{&l_915,(void*)0,&l_915},{&l_915,(void*)0,&l_915},{&l_915,(void*)0,&l_915}};
            int i, j;
            l_962 = (l_915 = l_960);
            return l_959;
        }
        if (((safe_unary_minus_func_int8_t_s((((((*l_964) = &g_563) != &g_563) , g_558.f0.f1) >= 247UL))) && (p_21 , 1L)))
        { 
            struct S1 *l_965 = (void*)0;
            struct S1 **l_966 = (void*)0;
            struct S1 **l_967 = &l_965;
            union U5 **l_968[1];
            int i;
            for (i = 0; i < 1; i++)
                l_968[i] = (void*)0;
            (*l_967) = l_965;
            return l_968[0];
        }
        else
        { 
            int32_t l_969 = 0x480B4ADDL;
            if (l_969)
                break;
            return l_970;
        }
    }
    for (g_555.f7 = (-23); (g_555.f7 < 2); ++g_555.f7)
    { 
        uint16_t *l_989 = &g_558.f0.f2;
        int32_t l_990[1][2][6] = {{{0L,1L,0L,1L,0L,1L},{0L,1L,0L,1L,0L,1L}}};
        struct S1 l_991 = {0xBF2A48DB316FE4CBLL,4L,9UL,0xCCF186252AB5AA76LL};
        const uint32_t l_1000[1][1][7] = {{{8UL,8UL,8UL,8UL,8UL,8UL,8UL}}};
        uint32_t l_1091[5][6][4] = {{{0UL,0x329F9726L,3UL,0x312F5B8DL},{1UL,1UL,0x9695C098L,0UL},{18446744073709551609UL,18446744073709551609UL,0x1E7C4313L,1UL},{0xC4B17EEBL,1UL,0x34B848F2L,18446744073709551609UL},{1UL,0x4CA135ADL,0UL,0x88DD2F9EL},{0x34B848F2L,0x74CDCDFFL,0x4CFA39DDL,0x4CFA39DDL}},{{18446744073709551608UL,18446744073709551608UL,0x6AB904C2L,0xB21A0951L},{1UL,18446744073709551611UL,0x5CD724A2L,0x4CA135ADL},{0x2828ADD7L,0x5AC5B018L,18446744073709551611UL,0x5CD724A2L},{0UL,0x5AC5B018L,0UL,0x4CA135ADL},{0x5AC5B018L,18446744073709551611UL,18446744073709551615UL,0xB21A0951L},{1UL,18446744073709551608UL,0x8EAD729AL,0x4CFA39DDL}},{{0x9695C098L,0x74CDCDFFL,0xC4B17EEBL,1UL},{0x47C21AA7L,0x23F46206L,0x019F24B9L,18446744073709551609UL},{0x4CFA39DDL,1UL,0x23F46206L,3UL},{0x9695C098L,18446744073709551609UL,18446744073709551610UL,0x9695C098L},{1UL,0x2828ADD7L,18446744073709551615UL,0x1E7C4313L},{0x019F24B9L,18446744073709551612UL,4UL,0x34B848F2L}},{{0UL,1UL,0xBFF6A930L,0UL},{0x4CA135ADL,3UL,0x5CD724A2L,0x1E7C4313L},{0x936504DDL,0x4CA135ADL,0x936504DDL,18446744073709551615UL},{18446744073709551608UL,18446744073709551609UL,0UL,18446744073709551612UL},{0UL,0x936504DDL,18446744073709551615UL,18446744073709551609UL},{18446744073709551611UL,0xC798831AL,18446744073709551615UL,0x47C77B73L}},{{0UL,0x74CDCDFFL,0UL,0x47C21AA7L},{18446744073709551608UL,18446744073709551611UL,0x936504DDL,0xB21A0951L},{0x936504DDL,0xB21A0951L,0x5CD724A2L,0x2828ADD7L},{0x4CA135ADL,0x5AC5B018L,0xBFF6A930L,0x4193EE01L},{0UL,0x019F24B9L,4UL,0x4CA135ADL},{0x019F24B9L,0xB21A0951L,18446744073709551615UL,18446744073709551611UL}}};
        uint64_t l_1152 = 0xE0FDB367C53A810CLL;
        int i, j, k;
        for (g_489.f7 = 0; (g_489.f7 == 20); g_489.f7 = safe_add_func_uint64_t_u_u(g_489.f7, 4))
        { 
            uint32_t l_995 = 0UL;
            int16_t *l_998 = &g_157;
            int32_t l_999[5][3] = {{(-1L),0xDF701CCBL,0x86CD3BD1L},{0xDF701CCBL,(-1L),(-1L)},{0x86CD3BD1L,(-1L),0xF781F9B6L},{(-7L),0xDF701CCBL,0xC7E7F451L},{0x86CD3BD1L,0x86CD3BD1L,0xC7E7F451L}};
            int32_t *l_1031 = &g_127;
            union U2 * const l_1038 = &g_188;
            uint64_t l_1040 = 0x28EE50181A522BB6LL;
            uint32_t l_1065[7][5][7] = {{{0x608E4A7FL,0xDA3AC36BL,0x9475CFAEL,1UL,1UL,0x9475CFAEL,0xDA3AC36BL},{0xAE7A16E0L,0x384F0841L,0x29AB3EE7L,1UL,0x384F0841L,0xC6782946L,18446744073709551615UL},{8UL,1UL,0x57B6A172L,8UL,0xDA3AC36BL,8UL,0x57B6A172L},{0xC8142A55L,0xC8142A55L,0xB36483C5L,1UL,0xAE7A16E0L,18446744073709551615UL,0xC8142A55L},{8UL,0x57B6A172L,0x01C56B7EL,1UL,0x9AC8E945L,0x9AC8E945L,1UL}},{{18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xC6782946L,0xAE7A16E0L,18446744073709551611UL,0x384F0841L},{1UL,0xDA3AC36BL,1UL,0x6EDF8674L,0xDA3AC36BL,0UL,0xDA3AC36BL},{0x954134B8L,0xC6782946L,0xC6782946L,0x954134B8L,0x384F0841L,18446744073709551611UL,0xAE7A16E0L},{0x9AC8E945L,8UL,0x57B6A172L,0x01C56B7EL,1UL,0x9AC8E945L,0x9AC8E945L},{0xC8142A55L,0xAE7A16E0L,0UL,0xAE7A16E0L,0xC8142A55L,18446744073709551615UL,0xAE7A16E0L}},{{0x608E4A7FL,0x9B3575A1L,8UL,1UL,0x57B6A172L,8UL,0x9AC8E945L},{18446744073709551615UL,0UL,18446744073709551614UL,18446744073709551614UL,0UL,18446744073709551615UL,18446744073709551615UL},{0x01C56B7EL,8UL,0x608E4A7FL,0x01C56B7EL,0x9AC8E945L,0x6EDF8674L,8UL},{0xC6782946L,0xB36483C5L,18446744073709551615UL,0x384F0841L,18446744073709551615UL,0xB36483C5L,0xC6782946L},{0UL,8UL,8UL,0x9475CFAEL,0x57B6A172L,0UL,0x9475CFAEL}},{{0x29AB3EE7L,0UL,1UL,18446744073709551611UL,18446744073709551611UL,1UL,0UL},{8UL,0xB72CCF40L,8UL,0x9B3575A1L,0xB72CCF40L,0x9475CFAEL,0x9AC8E945L},{0UL,18446744073709551611UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0x57B6A172L,0x57B6A172L,0x608E4A7FL,0x9B3575A1L,8UL,1UL,0x57B6A172L},{0xC6782946L,18446744073709551615UL,18446744073709551614UL,18446744073709551611UL,0xB36483C5L,0xB36483C5L,18446744073709551611UL}},{{1UL,0x9AC8E945L,1UL,0x9475CFAEL,8UL,1UL,0xB72CCF40L},{18446744073709551611UL,0UL,18446744073709551615UL,0x384F0841L,0UL,0x954134B8L,0UL},{0x01C56B7EL,0x9475CFAEL,0x9475CFAEL,0x01C56B7EL,0xB72CCF40L,1UL,8UL},{0xB36483C5L,0xC6782946L,18446744073709551615UL,18446744073709551614UL,18446744073709551611UL,0xB36483C5L,0xB36483C5L},{0x57B6A172L,8UL,0xDA3AC36BL,8UL,0x57B6A172L,1UL,8UL}},{{0x29AB3EE7L,18446744073709551615UL,0UL,18446744073709551611UL,18446744073709551615UL,0UL,0UL},{0x9475CFAEL,0x9AC8E945L,8UL,8UL,0x9AC8E945L,0x9475CFAEL,0xB72CCF40L},{0x29AB3EE7L,18446744073709551611UL,0x954134B8L,0x29AB3EE7L,0UL,1UL,18446744073709551611UL},{0x57B6A172L,0UL,0x9475CFAEL,0x9B3575A1L,0x9475CFAEL,0UL,0x57B6A172L},{0xB36483C5L,18446744073709551611UL,18446744073709551614UL,18446744073709551615UL,0xC6782946L,0xB36483C5L,18446744073709551615UL}},{{0x01C56B7EL,0x9AC8E945L,0x6EDF8674L,8UL,8UL,0x6EDF8674L,0x9AC8E945L},{18446744073709551611UL,18446744073709551615UL,18446744073709551614UL,0x384F0841L,18446744073709551615UL,18446744073709551615UL,0UL},{1UL,8UL,0x9475CFAEL,1UL,0x9AC8E945L,1UL,0x9475CFAEL},{0xC6782946L,0xC6782946L,0x954134B8L,0x384F0841L,18446744073709551611UL,0xAE7A16E0L,0xC6782946L},{0x57B6A172L,0x9475CFAEL,8UL,8UL,0UL,0UL,8UL}}};
            int32_t l_1101[2];
            union U3 l_1124 = {65528UL};
            union U5 *l_1158[6][4] = {{&g_1159,&g_16,&g_1159,&g_1159},{&g_16,&g_16,&g_16,&g_16},{&g_16,&g_1159,&g_1159,&g_16},{&g_1159,&g_16,&g_1159,&g_1159},{&g_16,&g_16,&g_16,&g_16},{&g_16,&g_1159,&g_16,&g_1159}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1101[i] = (-9L);
            for (l_921 = 18; (l_921 <= 55); l_921 = safe_add_func_uint64_t_u_u(l_921, 7))
            { 
                int32_t **l_977 = &g_180;
                int32_t *l_978[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_978[i][j] = &g_106;
                }
            }
            (*g_180) &= (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((~(safe_mul_func_uint8_t_u_u((((p_21.f0 && 0x9F41343000D271F9LL) , (l_989 == (void*)0)) && ((0xE2712839L == l_990[0][1][3]) > (l_991 , 1UL))), 0x32L))), 7)) ^ (**g_610)), p_21.f0)) , 0x45L), 6));
        }
    }
    if (((&g_179[0] != (g_489.f7 , l_1160)) || ((**g_610) = ((g_108 & (-4L)) == ((l_1162 != ((l_1163 == (void*)0) , (void*)0)) && 0xF392BF2F7CA4C489LL)))))
    { 
        int32_t *l_1164 = &g_2;
        int32_t *l_1165 = (void*)0;
        int32_t *l_1166 = (void*)0;
        int32_t *l_1167 = (void*)0;
        int32_t *l_1168[7][7][5] = {{{(void*)0,&l_979[0],(void*)0,(void*)0,&l_979[0]},{&l_979[0],(void*)0,(void*)0,&g_106,(void*)0},{&l_979[0],&l_979[0],&g_127,&l_979[0],(void*)0},{(void*)0,&g_106,(void*)0,(void*)0,&g_2},{&l_979[0],&g_106,(void*)0,&l_979[0],(void*)0},{&l_979[0],&l_979[0],&g_127,&l_979[0],&l_979[0]},{(void*)0,&l_979[0],(void*)0,&g_106,&l_979[0]}},{{&g_2,(void*)0,(void*)0,&g_106,(void*)0},{(void*)0,&l_979[0],&g_127,&l_979[0],&l_979[0]},{(void*)0,&g_106,(void*)0,(void*)0,&l_979[0]},{&l_979[0],(void*)0,(void*)0,&l_979[0],(void*)0},{&g_2,&g_106,&g_8[3],&l_979[0],&g_2},{&g_106,&l_979[0],(void*)0,(void*)0,(void*)0},{&l_979[0],(void*)0,(void*)0,&l_979[0],(void*)0}},{{(void*)0,&l_979[0],&l_979[0],&l_979[0],&l_979[0]},{(void*)0,&l_979[0],(void*)0,(void*)0,&g_2},{(void*)0,&g_106,(void*)0,&l_979[0],&g_106},{&l_979[0],&g_106,&g_127,&g_106,&l_979[0]},{&g_106,&l_979[0],(void*)0,&g_106,(void*)0},{&g_2,(void*)0,(void*)0,&l_979[0],(void*)0},{&l_979[0],&l_979[0],&l_979[0],&l_979[0],(void*)0}},{{(void*)0,&l_979[0],(void*)0,(void*)0,&l_979[0]},{(void*)0,(void*)0,(void*)0,&l_979[0],&g_106},{&g_2,&l_979[0],&g_8[3],&g_106,&g_2},{(void*)0,&l_979[0],(void*)0,(void*)0,&l_979[0]},{&l_979[0],(void*)0,(void*)0,&g_106,(void*)0},{&l_979[0],&l_979[0],&g_127,&l_979[0],(void*)0},{(void*)0,&g_106,(void*)0,(void*)0,&g_2}},{{&l_979[0],&g_106,(void*)0,&l_979[0],(void*)0},{&l_979[0],&l_979[0],&g_127,&l_979[0],&l_979[0]},{(void*)0,&l_979[0],(void*)0,&g_106,&l_979[0]},{&g_2,(void*)0,(void*)0,&g_106,(void*)0},{(void*)0,&l_979[0],&g_127,&l_979[0],&l_979[0]},{(void*)0,&g_106,(void*)0,(void*)0,&l_979[0]},{&l_979[0],(void*)0,(void*)0,&l_979[0],(void*)0}},{{&g_2,&g_106,&g_8[3],&l_979[0],&g_2},{&g_106,&l_979[0],(void*)0,(void*)0,(void*)0},{&l_979[0],(void*)0,(void*)0,(void*)0,&g_106},{(void*)0,(void*)0,(void*)0,&g_106,&g_106},{&g_8[3],(void*)0,&g_8[3],&g_2,(void*)0},{(void*)0,&g_106,&g_127,(void*)0,&g_106},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_106,(void*)0,&g_127,&g_106,(void*)0},{(void*)0,&g_2,&g_8[3],(void*)0,&g_8[3]},{&g_106,&g_106,(void*)0,(void*)0,(void*)0},{&g_106,(void*)0,&g_127,&g_103[1],(void*)0},{(void*)0,&g_127,&l_979[0],&g_106,&g_106},{(void*)0,(void*)0,&g_2,(void*)0,(void*)0},{&g_103[1],&g_106,&g_127,&g_127,&g_106}}};
        uint8_t l_1170 = 0x04L;
        int i, j, k;
        l_1170--;
    }
    else
    { 
        int8_t l_1186 = 0xE3L;
        int32_t l_1187 = (-4L);
        int32_t l_1188 = 0L;
        int32_t l_1189 = 0x374E8DEBL;
        int32_t l_1190 = 0L;
        int32_t l_1191 = 0x5E578239L;
        int32_t l_1192 = 0xCFEE94C2L;
        int16_t l_1193 = (-1L);
        struct S0 **l_1233 = &l_1174;
        int32_t l_1238[2];
        int32_t l_1240 = 1L;
        int32_t l_1243 = 6L;
        int32_t l_1244 = 1L;
        int32_t l_1264 = 9L;
        union U5 l_1269 = {{-5L,0L,3UL,1UL}};
        int i;
        for (i = 0; i < 2; i++)
            l_1238[i] = 0xC0D15D65L;
        for (g_555.f5 = 1; (g_555.f5 <= 5); g_555.f5 += 1)
        { 
            int16_t l_1183 = (-10L);
            int32_t l_1184[5];
            int32_t *l_1198 = &g_8[3];
            const int8_t *l_1214[7][4][1] = {{{&g_1215[0]},{&g_1215[0]},{&g_1215[0]},{&g_1215[0]}},{{&g_1215[0]},{&g_1215[0]},{&g_1215[0]},{&g_1215[0]}},{{&g_1215[0]},{&g_1215[0]},{&g_1215[0]},{&g_1215[0]}},{{&g_1215[0]},{&g_1215[0]},{&g_1215[0]},{&g_1215[0]}},{{&g_1215[0]},{&g_1215[0]},{&g_1215[0]},{&g_1215[0]}},{{&g_1215[0]},{&g_1215[0]},{&g_1215[0]},{&g_1215[0]}},{{&g_1215[0]},{&g_1215[0]},{&g_1215[0]},{&g_1215[0]}}};
            const int8_t **l_1213[1][6][7] = {{{&l_1214[3][1][0],&l_1214[6][2][0],&l_1214[1][1][0],&l_1214[6][2][0],&l_1214[6][2][0],&l_1214[5][0][0],&l_1214[3][0][0]},{&l_1214[1][3][0],&l_1214[5][1][0],&l_1214[5][0][0],&l_1214[1][1][0],&l_1214[5][0][0],&l_1214[5][1][0],&l_1214[1][3][0]},{&l_1214[6][2][0],&l_1214[1][3][0],&l_1214[4][2][0],&l_1214[1][1][0],(void*)0,&l_1214[3][0][0],&l_1214[6][2][0]},{&l_1214[6][1][0],(void*)0,&l_1214[6][2][0],&l_1214[6][2][0],&l_1214[6][2][0],&l_1214[6][2][0],&l_1214[6][2][0]},{&l_1214[6][2][0],&l_1214[6][2][0],&l_1214[4][2][0],&l_1214[6][2][0],&l_1214[6][2][0],&l_1214[3][1][0],&l_1214[6][2][0]},{&l_1214[6][2][0],&l_1214[6][2][0],&l_1214[5][0][0],&l_1214[1][3][0],&l_1214[1][1][0],(void*)0,&l_1214[6][2][0]}}};
            int8_t l_1235 = 0x15L;
            union U5 *l_1250 = (void*)0;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1184[i] = 0xD399C3E3L;
            if ((&g_723[1][1] == l_1173))
            { 
                struct S0 **l_1175 = (void*)0;
                struct S0 **l_1176 = &g_554;
                (*l_1176) = l_1174;
            }
            else
            { 
                int32_t l_1181 = 0L;
                int32_t l_1182 = 0x86C53D67L;
                int32_t l_1185 = 1L;
                struct S0 l_1220 = {3L,0xAAL,4UL,8UL,0xDC9AL,0UL,0x888DCAE2E2C3EC30LL,1UL};
                union U2 l_1236 = {-2L};
                int32_t l_1241 = 1L;
                int32_t l_1242 = 0L;
                int32_t l_1245 = 0xC34DDCF7L;
                int i;
                for (g_329 = 0; (g_329 <= 5); g_329 += 1)
                { 
                    int32_t *l_1177 = &g_127;
                    int32_t *l_1178 = &l_979[0];
                    int32_t *l_1179 = (void*)0;
                    int32_t *l_1180[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1180[i] = (void*)0;
                    ++g_1194;
                    return l_1197;
                }
                if ((l_1184[3] |= g_8[g_555.f5]))
                { 
                    int32_t **l_1199 = &g_180;
                    struct S1 l_1219 = {-1L,0x2E393F24039A08F3LL,65531UL,18446744073709551614UL};
                    int32_t l_1223 = (-1L);
                    union U5 *** const *l_1231[7] = {&g_713[4][2][0],&g_711,&g_713[4][2][0],&g_713[4][2][0],&g_711,&g_713[4][2][0],&g_713[4][2][0]};
                    struct S0 ***l_1234 = &l_1233;
                    int32_t *l_1237[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1237[i][j] = (void*)0;
                    }
                    (*l_1199) = l_1198;
                    l_1192 &= (((safe_mod_func_uint64_t_u_u(((((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(((**g_610) = ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((((((l_1213[0][0][3] = g_1212[0][0]) == ((((((safe_unary_minus_func_int8_t_s((safe_add_func_uint64_t_u_u((l_1219 , (((p_21.f0 > ((l_1220 , (*g_563)) & 18446744073709551607UL)) && (l_1188 , 1UL)) < p_21.f0)), (**l_1199))))) ^ (**l_1161)) != 0x3C5BC6D0D8BAE3B7LL) , &g_489) != (void*)0) , l_1221)) && (**l_1199)) | l_1223) >= l_1191), l_1187)), p_21.f0)) != 65535UL)), 1)) >= 65535UL) ^ 4UL), p_21.f0)) <= (-7L)), (**l_1199))) || p_21.f0) > (*l_1198)) | p_21.f0), 0x7B5AFBB4B21D3A7ALL)) && p_21.f0) || (**l_1199));
                    (*l_1198) = (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((**g_610), 6)), 5)), (((((+(**l_1199)) > ((l_1231[5] != (void*)0) & (**g_562))) & (!(((((*l_1234) = l_1233) != (void*)0) && 1UL) & l_1235))) , (void*)0) == (void*)0))) , l_1236) , (-9L));
                    l_1246[0][3][0]--;
                }
                else
                { 
                    int32_t **l_1249[4][5] = {{&l_962,&l_962,&l_962,&l_962,&l_962},{&l_1198,&l_1198,&l_1198,&l_1198,&l_1198},{&l_962,&l_962,&l_962,&l_962,&l_962},{&l_1198,&l_1198,&l_1198,&l_1198,&l_1198}};
                    int i, j;
                    l_1198 = &l_1185;
                    if ((*l_1198))
                        break;
                    if (p_21.f0)
                        break;
                    (*g_613) = l_1250;
                    (**l_1161) = p_21.f0;
                }
            }
        }
        for (g_120 = 0; (g_120 < 20); g_120 = safe_add_func_uint8_t_u_u(g_120, 1))
        { 
            uint8_t ****l_1254 = &l_1253[1];
            uint8_t ***l_1256[4][5][2] = {{{(void*)0,&g_610},{&g_610,&g_610},{&g_610,&g_610},{&g_610,&g_610},{&g_610,&g_610}},{{&g_610,&g_610},{(void*)0,&g_610},{&g_610,&g_610},{&g_610,&g_610},{&g_610,&g_610}},{{&g_610,(void*)0},{&g_610,&g_610},{&g_610,&g_610},{&g_610,&g_610},{&g_610,&g_610}},{{(void*)0,&g_610},{&g_610,&g_610},{&g_610,&g_610},{&g_610,(void*)0},{(void*)0,&g_610}}};
            uint8_t ****l_1255 = &l_1256[3][2][0];
            int32_t l_1261 = 0xC6EAD722L;
            uint64_t *l_1265 = &g_489.f5;
            int32_t l_1266 = 0xDCAF447CL;
            union U2 l_1271 = {-10L};
            union U3 l_1272 = {0x2DD5L};
            int i, j, k;
            (*l_1255) = ((*l_1254) = l_1253[1]);
            l_1266 &= ((safe_add_func_uint16_t_u_u(p_21.f0, p_21.f0)) == (safe_sub_func_uint64_t_u_u((l_1192 &= ((*l_1265) = ((l_1240 |= ((((((*g_830) &= (l_1261 == (((((*g_466) |= p_21.f0) <= ((*g_563)--)) & l_1238[1]) && 0x074359CBL))) ^ (***l_1160)) , p_21.f0) ^ l_1264) >= l_1243)) != 0x4123878FL))), l_1191)));
            l_1189 = ((*l_962) = ((safe_mod_func_int16_t_s_s((l_1269 , ((l_1238[1] , l_1270) != (((l_1271 , ((l_1272 , l_1269) , 0x50L)) & 0x5CL) , (void*)0))), 0xC80AL)) | (***l_1160)));
            for (g_126 = (-9); (g_126 > 48); g_126++)
            { 
                (*l_1173) = (*l_1173);
            }
            if (p_21.f0)
                break;
        }
    }
    l_979[0] &= ((safe_mod_func_uint8_t_u_u((((void*)0 == l_1253[1]) >= (((((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_21.f0, ((safe_div_func_int32_t_s_s((***l_1160), (safe_div_func_int32_t_s_s((((*l_1286) = l_1285) != (((((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((**l_1161), ((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(8UL, 10)) , (**l_1197)) , (***l_1160)), 12)) && (-7L)))) > l_1295), p_21.f0)) < (*g_461)) != p_21.f0) | p_21.f0) , &l_1132[2][2][0])), p_21.f0)))) && 4UL))) , 0xE7L), (**l_1161))) | 0x71BA505E3ACE1830LL) , (**l_1161)) , 0xF14AL) , l_1296)), (***l_1160))) <= (**g_610));
    return l_1197;
}



static const int64_t  func_23(struct S1  p_24, const int32_t  p_25, int64_t  p_26, uint32_t  p_27)
{ 
    int32_t l_37 = (-4L);
    uint32_t **l_38 = (void*)0;
    uint32_t **l_39 = (void*)0;
    uint32_t *l_41[3];
    uint32_t **l_40 = &l_41[2];
    uint32_t l_64 = 0x977B405AL;
    uint16_t *l_65 = &g_66[1];
    int64_t l_67 = (-8L);
    int8_t *l_68 = &g_69[5];
    union U5 *l_420 = (void*)0;
    union U2 l_440 = {1L};
    int32_t l_648[6][6] = {{0L,0xFABD7BADL,0x5FA69D02L,0xB2F269C1L,0xB2F269C1L,0x5FA69D02L},{0xB2F269C1L,0xB2F269C1L,0x5FA69D02L,0xFABD7BADL,0L,0L},{0xB2F269C1L,0xFABD7BADL,0xFABD7BADL,0xB2F269C1L,0L,0x5FA69D02L},{0L,0xB2F269C1L,0xFABD7BADL,0xFABD7BADL,0xB2F269C1L,0L},{0L,0xFABD7BADL,0x5FA69D02L,0xB2F269C1L,0xB2F269C1L,0x5FA69D02L},{0xB2F269C1L,0xB2F269C1L,0x5FA69D02L,0xFABD7BADL,0L,0L}};
    union U5 l_649 = {{0xC1A4C46E16840764LL,0xD783890E4FD4B9C3LL,1UL,0xCFF4F7933A8B2008LL}};
    int32_t ***l_912[6][6][4] = {{{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],(void*)0,(void*)0,&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[0]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[0],(void*)0,&g_179[1]}},{{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{(void*)0,&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],(void*)0,&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]}},{{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[0],&g_179[1],&g_179[1]},{&g_179[0],&g_179[1],(void*)0,&g_179[0]},{(void*)0,&g_179[1],(void*)0,&g_179[1]}},{{&g_179[0],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],(void*)0,&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]}},{{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{(void*)0,&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],(void*)0,(void*)0,&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]}},{{&g_179[1],&g_179[1],&g_179[1],&g_179[0]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[0],(void*)0,&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{&g_179[1],&g_179[1],&g_179[1],&g_179[1]},{(void*)0,&g_179[1],&g_179[1],&g_179[1]}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_41[i] = &g_6;
    g_179[1] = func_29(((safe_lshift_func_uint8_t_u_s(l_37, ((((*l_40) = (void*)0) == (func_42(g_16.f0.f0, l_37, func_48((safe_add_func_uint32_t_u_u(func_54(&g_6, ((safe_unary_minus_func_int16_t_s((((*l_65) = (safe_mod_func_uint16_t_u_u((+(safe_lshift_func_int16_t_s_u(p_27, l_64))), (-5L)))) < l_67))) && 0xE8C0L), l_68), 1UL)), l_420, g_16.f0.f0), l_440, &g_93[1]) , (void*)0)) && l_648[5][3]))) , (-6L)), (*g_134), &g_126, l_68, l_649);
    return (*g_461);
}



static int32_t ** func_29(int16_t  p_30, uint32_t * const  p_31, uint32_t * p_32, int8_t * p_33, union U5  p_34)
{ 
    uint16_t l_672 = 1UL;
    int32_t *l_676 = (void*)0;
    int32_t l_728 = 0xD76135A9L;
    uint32_t l_738 = 0x1473D5E9L;
    union U2 l_742 = {0x28D9D001L};
    int32_t l_743 = 0xDFADA6C2L;
    uint32_t l_746[4] = {0x2FA43E96L,0x2FA43E96L,0x2FA43E96L,0x2FA43E96L};
    union U4 l_749 = {0xE697L};
    int32_t l_762 = 0x485F70B4L;
    uint16_t l_766 = 0xE67BL;
    int32_t l_769[7] = {0x9EB3171AL,0x9EB3171AL,0x9EB3171AL,0x9EB3171AL,0x9EB3171AL,0x9EB3171AL,0x9EB3171AL};
    int32_t l_774 = 0x4FAE396FL;
    int16_t l_795 = 1L;
    union U5 ** const *l_812 = (void*)0;
    struct S1 *l_854 = &g_558.f0;
    struct S1 **l_853 = &l_854;
    int16_t l_856 = 0xD7F5L;
    int16_t l_857 = 0x3B49L;
    uint8_t l_868 = 0xE6L;
    int32_t *l_888 = &g_2;
    uint64_t l_907 = 1UL;
    int i;
    for (g_555.f5 = (-28); (g_555.f5 == 4); g_555.f5 = safe_add_func_int8_t_s_s(g_555.f5, 1))
    { 
        uint64_t l_652 = 18446744073709551615UL;
        int32_t *l_671[1][1];
        union U3 l_675 = {8UL};
        int32_t ***l_684[4] = {&g_179[0],&g_179[0],&g_179[0],&g_179[0]};
        int32_t l_686[2][6][2] = {{{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L}},{{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L},{1L,0x9F56D7E7L}}};
        uint16_t l_693 = 0UL;
        union U4 l_799 = {0xCCABL};
        const union U5 ***l_844 = &g_613;
        const union U5 **** const l_843 = &l_844;
        struct S1 *l_847 = &g_16.f0;
        union U3 ** const l_901 = &g_723[3][3];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_671[i][j] = &g_2;
        }
        if (l_652)
            break;
        if (l_652)
            goto lbl_911;
    }
lbl_911:
    l_888 = &l_762;
    return &g_180;
}



static union U2  func_42(uint32_t  p_43, uint64_t  p_44, union U4  p_45, union U2  p_46, union U5 * const * p_47)
{ 
    uint16_t l_441[3][6] = {{1UL,0x6AB4L,1UL,0x6AB4L,1UL,0x6AB4L},{1UL,0x6AB4L,1UL,0x6AB4L,1UL,0x6AB4L},{1UL,0x6AB4L,1UL,0x6AB4L,1UL,0x6AB4L}};
    uint8_t *l_448 = (void*)0;
    uint8_t *l_449 = &g_382.f7;
    int32_t *l_451[3];
    uint8_t l_452 = 0x70L;
    uint16_t *l_456 = &l_441[0][1];
    uint16_t **l_455 = &l_456;
    int64_t **l_462 = &g_461;
    int64_t *l_464 = &g_108;
    int64_t **l_463[3][7] = {{&l_464,&l_464,&l_464,&l_464,&l_464,&l_464,&l_464},{&l_464,&l_464,&l_464,&l_464,&l_464,&l_464,&l_464},{&l_464,&l_464,&l_464,&l_464,&l_464,&l_464,&l_464}};
    int32_t ** const *l_470[5] = {&g_179[1],&g_179[1],&g_179[1],&g_179[1],&g_179[1]};
    struct S0 *l_488 = &g_489;
    uint32_t l_538 = 4294967291UL;
    union U5 *l_584 = &g_16;
    uint8_t l_621 = 0xF4L;
    const uint32_t l_624 = 0x1A22B96AL;
    uint16_t l_625 = 8UL;
    uint32_t l_626 = 0xEC355400L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_451[i] = &g_2;
lbl_515:
    l_452 = ((*g_180) = (l_441[0][0] == (safe_lshift_func_int8_t_s_u(((p_46.f2 = (safe_sub_func_int8_t_s_s((0x09E4529563E55B33LL | (safe_rshift_func_uint8_t_u_s(((*l_449) = 253UL), 7))), 0xEAL))) <= ((~(&l_448 != (((0x4EL < l_441[0][0]) , 0x4ECDEFE2L) , &l_449))) | g_340)), 6))));
    if ((safe_div_func_uint8_t_u_u((((((void*)0 == l_455) & (safe_sub_func_uint16_t_u_u(g_382.f4, ((((((**l_455) = (0x3059L > ((g_465[2][1][3] = ((*l_462) = g_461)) == (g_466 = &g_108)))) < ((!(safe_mod_func_int32_t_s_s((g_188.f1 | 0xE1L), 4294967287UL))) != 0x6AL)) < g_340) ^ 0x5BEF293E3C792EF1LL) ^ (*g_180))))) , l_470[2]) != &g_179[1]), 1UL)))
    { 
        int64_t l_471 = 0xB2F56605E3675AF6LL;
        int32_t l_472 = 0x185F7A62L;
        int32_t l_473 = 0x51AEB161L;
        int32_t l_474 = (-8L);
        int32_t l_475 = (-2L);
        int32_t l_476 = 0xDB8FC151L;
        int32_t l_477 = 6L;
        int32_t l_478 = 0L;
        int32_t l_479 = 9L;
        int32_t l_480 = 2L;
        int32_t l_481 = 0xFE351133L;
        int32_t l_482 = 0x6329F8CBL;
        int32_t l_483[2];
        uint32_t l_484 = 4294967291UL;
        int i;
        for (i = 0; i < 2; i++)
            l_483[i] = (-6L);
        ++l_484;
    }
    else
    { 
        uint8_t l_487 = 1UL;
        int32_t l_504 = 0x22468139L;
        int32_t l_509 = (-3L);
        int32_t l_511 = 0xD0421994L;
        int32_t *l_516[3][6][2] = {{{&g_103[4],&g_2},{&g_2,&g_103[4]},{&g_2,&g_2},{&g_103[4],&g_2},{&g_2,&g_103[4]},{&g_2,&g_2}},{{&g_103[4],&g_2},{&g_2,&g_103[4]},{&g_2,&g_2},{&g_103[4],&g_2},{&g_2,&g_103[4]},{&g_2,&g_2}},{{&g_103[4],&g_2},{&g_2,&g_103[4]},{&g_2,&g_2},{&g_103[4],&g_2},{&g_2,&g_103[4]},{&g_2,&g_2}}};
        struct S0 *l_552 = &g_382;
        union U5 *l_557 = &g_558;
        uint64_t *l_560 = &g_489.f5;
        uint64_t **l_559[6] = {&l_560,&l_560,&l_560,&l_560,&l_560,&l_560};
        int32_t l_612 = 0xD3EA30B1L;
        int32_t l_617 = 0x85BA3A90L;
        int i, j, k;
        (*g_180) |= l_487;
    }
    l_626++;
    for (g_120 = 0; (g_120 <= 1); g_120 += 1)
    { 
        int16_t l_633 = (-1L);
        uint32_t l_647 = 1UL;
        int i;
        (*g_180) |= ((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_633, l_633)), (safe_mul_func_uint16_t_u_u((((p_45.f0 | 0xCD55DA7B25BC0089LL) < ((safe_rshift_func_int16_t_s_s(((247UL < (p_43 <= 0x1A7DADFDL)) <= 1L), g_555.f7)) != p_46.f0)) > p_44), g_555.f0)))) && 65527UL);
        (*g_180) = (!((*l_456) |= ((**p_47) , (p_44 & ((~(safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((p_44 && (&l_584 != &g_614)), (safe_rshift_func_uint16_t_u_u((g_646 , g_103[1]), p_44)))), 4))) ^ l_647)))));
    }
    if (g_555.f7)
        goto lbl_515;
    return g_188;
}



static union U4  func_48(int8_t  p_49, union U5 * p_50, uint8_t  p_51)
{ 
    uint64_t l_421[7];
    uint16_t *l_434 = &g_66[1];
    uint16_t **l_433 = &l_434;
    uint64_t *l_437[3];
    uint32_t *l_438 = &g_6;
    union U4 l_439 = {0x8643L};
    int i;
    for (i = 0; i < 7; i++)
        l_421[i] = 0x2693A375862950EALL;
    for (i = 0; i < 3; i++)
        l_437[i] = &g_382.f6;
    (*g_180) ^= l_421[6];
    (*g_180) = (l_421[6] || (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((-10L), (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint16_t_u_s(((l_433 = (void*)0) != (void*)0), 2)) , ((((((g_382.f6 = ((safe_sub_func_int16_t_s_s(((g_16.f0 , ((0xFCB66095L == ((&g_179[1] == &g_179[1]) >= p_51)) , l_421[6])) || p_49), 0xB156L)) || g_2)) , (void*)0) != l_438) == p_49) ^ p_51) | g_66[3])))) || g_126) , 0xD1L), p_49)), g_188.f1)) >= l_421[6]) ^ p_51))), g_16.f0.f3)));
    (*g_180) = p_49;
    return l_439;
}



static uint32_t  func_54(uint32_t * p_55, uint32_t  p_56, int8_t * p_57)
{ 
    int32_t l_77 = (-1L);
    const int32_t *l_80 = &g_8[3];
    uint32_t *l_90 = (void*)0;
    union U2 l_91 = {0x3672E3E3L};
    int32_t l_199 = (-1L);
    uint32_t l_203[2][2][2] = {{{0x8A2BD3B2L,18446744073709551612UL},{18446744073709551612UL,0x8A2BD3B2L}},{{18446744073709551612UL,18446744073709551612UL},{0x8A2BD3B2L,18446744073709551612UL}}};
    int32_t l_250[7][1];
    const union U3 l_267[5] = {{0x160BL},{0x160BL},{0x160BL},{0x160BL},{0x160BL}};
    union U5 **l_276 = &g_93[1];
    union U5 ***l_275[7][6][1] = {{{&l_276},{&l_276},{&l_276},{&l_276},{&l_276},{&l_276}},{{&l_276},{&l_276},{&l_276},{&l_276},{&l_276},{&l_276}},{{&l_276},{&l_276},{&l_276},{&l_276},{&l_276},{&l_276}},{{&l_276},{&l_276},{&l_276},{&l_276},{&l_276},{&l_276}},{{&l_276},{&l_276},{&l_276},{&l_276},{&l_276},{&l_276}},{{&l_276},{&l_276},{&l_276},{&l_276},{&l_276},{&l_276}},{{&l_276},{&l_276},{&l_276},{&l_276},{&l_276},{&l_276}}};
    int32_t l_294 = (-1L);
    int16_t l_299 = 0xF740L;
    uint8_t *l_321 = &g_120;
    uint8_t l_380 = 0x7DL;
    uint64_t *l_411 = &g_382.f6;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_250[i][j] = 0x05D044DBL;
    }
    for (g_6 = 1; (g_6 <= 4); g_6 += 1)
    { 
        int16_t l_73[5] = {0xEB45L,0xEB45L,0xEB45L,0xEB45L,0xEB45L};
        int32_t l_202 = 0x077F640AL;
        int32_t **l_234 = &g_180;
        int32_t l_246 = 1L;
        int32_t l_248 = (-1L);
        int32_t l_252 = 0x055FC917L;
        uint32_t l_253 = 18446744073709551615UL;
        union U2 l_256[5] = {{0x62808190L},{0x62808190L},{0x62808190L},{0x62808190L},{0x62808190L}};
        int32_t l_266 = 1L;
        union U3 l_274 = {65531UL};
        int32_t l_285 = 0L;
        int32_t l_286 = 0x04B462E7L;
        int32_t l_288 = 0xFE563360L;
        int32_t l_290 = 0L;
        int32_t l_291 = 0x81E61262L;
        int32_t l_292 = (-9L);
        int32_t l_293 = 1L;
        int32_t l_295 = 1L;
        int32_t l_296 = 0L;
        int32_t l_297 = 0xDB1C902EL;
        int32_t l_300 = 6L;
        int32_t l_301 = 0xA5E68DE6L;
        int32_t l_302[4][3];
        uint16_t *l_318 = &g_16.f0.f2;
        int64_t l_328 = 0xA6A7FCBB9C400D9DLL;
        union U5 l_378[7] = {{{0xE1C36E189746B821LL,-10L,65529UL,0x4DD1BDAB3B4B3AD3LL}},{{0xE1C36E189746B821LL,-10L,65529UL,0x4DD1BDAB3B4B3AD3LL}},{{0xE1C36E189746B821LL,-10L,65529UL,0x4DD1BDAB3B4B3AD3LL}},{{0xE1C36E189746B821LL,-10L,65529UL,0x4DD1BDAB3B4B3AD3LL}},{{0xE1C36E189746B821LL,-10L,65529UL,0x4DD1BDAB3B4B3AD3LL}},{{0xE1C36E189746B821LL,-10L,65529UL,0x4DD1BDAB3B4B3AD3LL}},{{0xE1C36E189746B821LL,-10L,65529UL,0x4DD1BDAB3B4B3AD3LL}}};
        union U5 ***l_396 = &l_276;
        int32_t l_399[5] = {1L,1L,1L,1L,1L};
        uint64_t *l_412 = &g_382.f6;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_302[i][j] = 0x18E897B7L;
        }
    }
    return g_98;
}



static int32_t  func_84(uint32_t * p_85, union U2  p_86, union U5 ** const  p_87, int32_t * p_88, int32_t * p_89)
{ 
    int32_t l_105 = (-1L);
    uint16_t l_111 = 4UL;
    int32_t l_137 = 1L;
    int32_t l_144 = 0xFD3493D6L;
    uint8_t *l_148 = (void*)0;
    int32_t *l_166 = &g_2;
    int32_t l_167 = 4L;
    int32_t *l_168 = &l_144;
    int32_t *l_169 = &g_2;
    int32_t *l_170[3];
    uint64_t l_171 = 0x46FAD07B9CB312F1LL;
    int32_t **l_182 = &g_180;
    int32_t ***l_181 = &l_182;
    uint8_t *l_187 = &g_120;
    struct S0 l_193[5] = {{5L,8L,0x3AL,0UL,-4L,1UL,0xC112FE6111B435A6LL,255UL},{5L,8L,0x3AL,0UL,-4L,1UL,0xC112FE6111B435A6LL,255UL},{5L,8L,0x3AL,0UL,-4L,1UL,0xC112FE6111B435A6LL,255UL},{5L,8L,0x3AL,0UL,-4L,1UL,0xC112FE6111B435A6LL,255UL},{5L,8L,0x3AL,0UL,-4L,1UL,0xC112FE6111B435A6LL,255UL}};
    union U5 **l_194 = (void*)0;
    union U5 ***l_195 = &l_194;
    int i;
    for (i = 0; i < 3; i++)
        l_170[i] = &l_137;
    for (p_86.f1 = 7; (p_86.f1 <= 14); p_86.f1 = safe_add_func_int32_t_s_s(p_86.f1, 1))
    { 
        int32_t *l_96 = &g_2;
        int32_t *l_97[3][2][2];
        uint8_t *l_125 = (void*)0;
        uint8_t *l_149 = &g_120;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_97[i][j][k] = &g_2;
            }
        }
        ++g_98;
        (*p_88) = (*p_88);
        for (g_2 = 0; (g_2 == (-12)); --g_2)
        { 
            uint8_t l_145 = 1UL;
            int32_t l_165 = 0x01407DDAL;
            for (g_98 = 1; (g_98 <= 5); g_98 += 1)
            { 
                int64_t l_104 = 0L;
                int32_t l_107 = 0x02EA278FL;
                const uint16_t *l_139[1];
                const uint16_t **l_140 = &l_139[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_139[i] = &g_66[1];
                for (g_103[1] = 1; (g_103[1] >= 0); g_103[1] -= 1)
                { 
                    int32_t l_109 = 0L;
                    int32_t l_110 = 0x606170AFL;
                    int32_t **l_116 = &l_96;
                    uint8_t *l_119 = &g_120;
                    uint16_t *l_136 = &l_111;
                    int i, j, k;
                    l_111++;
                    l_110 &= (safe_div_func_uint64_t_u_u(((g_69[g_98] , l_97[(g_103[1] + 1)][g_103[1]][g_103[1]]) != ((*l_116) = (void*)0)), (safe_lshift_func_uint16_t_u_u(((((*l_119)--) || (&g_2 != (((g_127 = ((*l_119) = (safe_lshift_func_int16_t_s_u((2L != (g_126 = (g_69[g_98] , (l_125 == l_119)))), g_66[(g_103[1] + 2)])))) | p_86.f1) , p_89))) > 0x27L), 7))));
                    g_127 |= (safe_div_func_int64_t_s_s(p_86.f2, (((safe_mod_func_uint8_t_u_u((18446744073709551615UL || ((safe_add_func_uint32_t_u_u(((l_107 > g_126) || g_2), (p_86.f0 < (l_137 |= ((*l_136) = ((void*)0 != g_134)))))) <= 6L)), p_86.f2)) > 2UL) , p_86.f2)));
                }
                if ((g_69[g_98] || ((!p_86.f1) || (&g_66[3] == ((*l_140) = l_139[0])))))
                { 
                    uint32_t l_141 = 0x1D2E95C9L;
                    int32_t **l_142 = &l_97[0][1][1];
                    int32_t l_143 = 0x05672CF6L;
                    if (l_141)
                        break;
                    (*l_142) = &g_103[1];
                    --l_145;
                    g_103[1] = (l_148 == l_149);
                }
                else
                { 
                    int32_t **l_150 = &l_96;
                    int16_t *l_156[5][4][6] = {{{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,&g_157,(void*)0,&g_157},{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,(void*)0,(void*)0,&g_157}},{{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,(void*)0,&g_157,&g_157},{&g_157,(void*)0,(void*)0,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,&g_157,(void*)0,&g_157}},{{&g_157,&g_157,&g_157,&g_157,(void*)0,&g_157},{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157},{(void*)0,(void*)0,&g_157,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157}},{{&g_157,&g_157,&g_157,&g_157,(void*)0,&g_157},{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,(void*)0,(void*)0,&g_157},{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157}},{{&g_157,&g_157,&g_157,(void*)0,&g_157,&g_157},{&g_157,(void*)0,(void*)0,&g_157,&g_157,&g_157},{&g_157,&g_157,&g_157,&g_157,(void*)0,&g_157},{&g_157,&g_157,&g_157,&g_157,(void*)0,&g_157}}};
                    int i, j, k;
                    (*l_150) = (void*)0;
                    l_137 = (1L ^ (l_148 != (g_16.f0 , ((l_145 > (safe_div_func_uint64_t_u_u((((+(safe_mul_func_uint16_t_u_u(p_86.f1, (l_107 = 0xDD7FL)))) ^ (((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_86.f0, p_86.f0)), 1)) && l_105) , 250UL)) | p_86.f2), 8L))) , (void*)0))));
                    return g_98;
                }
                l_165 |= (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint64_t_u(p_86.f1)) != (g_103[4] <= ((void*)0 != &g_135))), 9));
            }
        }
        return l_137;
    }
    ++l_171;
    g_127 ^= (((*g_180) = ((safe_mul_func_uint8_t_u_u((((*l_166) ^= (+((*l_168) , p_86.f1))) < (&l_166 == ((*l_181) = (g_179[1] = &l_166)))), (safe_div_func_int64_t_s_s((0x8735L > (((safe_lshift_func_uint8_t_u_s(((*l_187) = 0x20L), g_126)) , (*g_180)) ^ p_86.f2)), g_98)))) , (*p_88))) & 4294967288UL);
    (*p_88) = ((g_188 , (g_69[0] == (((**l_182) & 0xBC3822EEL) > (((*g_180) = (safe_sub_func_int16_t_s_s(g_103[3], (safe_mul_func_uint8_t_u_u(((((*l_168) = (*p_89)) & (l_193[2] , (*p_88))) != 65533UL), 5L))))) , g_16.f0.f1)))) || p_86.f1);
    (*l_195) = l_194;
    return (*g_180);
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
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);

    }
    transparent_crc(g_16.f0.f0, "g_16.f0.f0", print_hash_value);
    transparent_crc(g_16.f0.f1, "g_16.f0.f1", print_hash_value);
    transparent_crc(g_16.f0.f2, "g_16.f0.f2", print_hash_value);
    transparent_crc(g_16.f0.f3, "g_16.f0.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_103[i], "g_103[i]", print_hash_value);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    transparent_crc(g_382.f1, "g_382.f1", print_hash_value);
    transparent_crc(g_382.f2, "g_382.f2", print_hash_value);
    transparent_crc(g_382.f3, "g_382.f3", print_hash_value);
    transparent_crc(g_382.f4, "g_382.f4", print_hash_value);
    transparent_crc(g_382.f5, "g_382.f5", print_hash_value);
    transparent_crc(g_382.f6, "g_382.f6", print_hash_value);
    transparent_crc(g_382.f7, "g_382.f7", print_hash_value);
    transparent_crc(g_489.f0, "g_489.f0", print_hash_value);
    transparent_crc(g_489.f1, "g_489.f1", print_hash_value);
    transparent_crc(g_489.f2, "g_489.f2", print_hash_value);
    transparent_crc(g_489.f3, "g_489.f3", print_hash_value);
    transparent_crc(g_489.f4, "g_489.f4", print_hash_value);
    transparent_crc(g_489.f5, "g_489.f5", print_hash_value);
    transparent_crc(g_489.f6, "g_489.f6", print_hash_value);
    transparent_crc(g_489.f7, "g_489.f7", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_543.f0, "g_543.f0", print_hash_value);
    transparent_crc(g_555.f0, "g_555.f0", print_hash_value);
    transparent_crc(g_555.f1, "g_555.f1", print_hash_value);
    transparent_crc(g_555.f2, "g_555.f2", print_hash_value);
    transparent_crc(g_555.f3, "g_555.f3", print_hash_value);
    transparent_crc(g_555.f4, "g_555.f4", print_hash_value);
    transparent_crc(g_555.f5, "g_555.f5", print_hash_value);
    transparent_crc(g_555.f6, "g_555.f6", print_hash_value);
    transparent_crc(g_555.f7, "g_555.f7", print_hash_value);
    transparent_crc(g_558.f0.f0, "g_558.f0.f0", print_hash_value);
    transparent_crc(g_558.f0.f1, "g_558.f0.f1", print_hash_value);
    transparent_crc(g_558.f0.f2, "g_558.f0.f2", print_hash_value);
    transparent_crc(g_558.f0.f3, "g_558.f0.f3", print_hash_value);
    transparent_crc(g_568.f0, "g_568.f0", print_hash_value);
    transparent_crc(g_646.f0, "g_646.f0", print_hash_value);
    transparent_crc(g_1107, "g_1107", print_hash_value);
    transparent_crc(g_1159.f0.f0, "g_1159.f0.f0", print_hash_value);
    transparent_crc(g_1159.f0.f1, "g_1159.f0.f1", print_hash_value);
    transparent_crc(g_1159.f0.f2, "g_1159.f0.f2", print_hash_value);
    transparent_crc(g_1159.f0.f3, "g_1159.f0.f3", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1215[i], "g_1215[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1469[i], "g_1469[i]", print_hash_value);

    }
    transparent_crc(g_1480, "g_1480", print_hash_value);
    transparent_crc(g_1519.f0, "g_1519.f0", print_hash_value);
    transparent_crc(g_1519.f1, "g_1519.f1", print_hash_value);
    transparent_crc(g_1519.f2, "g_1519.f2", print_hash_value);
    transparent_crc(g_1519.f3, "g_1519.f3", print_hash_value);
    transparent_crc(g_1536, "g_1536", print_hash_value);
    transparent_crc(g_1565, "g_1565", print_hash_value);
    transparent_crc(g_1589, "g_1589", print_hash_value);
    transparent_crc(g_1592.f0.f0, "g_1592.f0.f0", print_hash_value);
    transparent_crc(g_1592.f0.f1, "g_1592.f0.f1", print_hash_value);
    transparent_crc(g_1592.f0.f2, "g_1592.f0.f2", print_hash_value);
    transparent_crc(g_1592.f0.f3, "g_1592.f0.f3", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1737, "g_1737", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1744[i][j][k], "g_1744[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1788, "g_1788", print_hash_value);
    transparent_crc(g_1840.f0, "g_1840.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
