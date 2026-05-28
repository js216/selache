// SPDX-License-Identifier: MIT
// cctest_csmith_3f736932.c --- cctest case csmith_3f736932 (csmith seed 1064528178)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb986dab3 */
/* @exp_ticks 0x32f3 */

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

// Options:   -s 1064528178 -o /tmp/csmith_gen_q9bn1476/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint64_t  f0;
   int64_t  f1;
   const uint32_t  f2;
   const uint32_t  f3;
   uint32_t  f4;
   int16_t  f5;
};

union U1 {
   const int8_t  f0;
   int32_t  f1;
   uint16_t  f2;
   struct S0  f3;
};


static int32_t g_3[3][1] = {{0x40FC0272L},{0x40FC0272L},{0x40FC0272L}};
static int32_t g_4 = 0xAB60E704L;
static int8_t g_7 = 1L;
static uint32_t g_8 = 0x7257EA0DL;
static union U1 g_30 = {0x07L};
static int8_t g_64 = 1L;
static int16_t g_76 = 0L;
static int32_t g_81[4] = {3L,3L,3L,3L};
static struct S0 g_86 = {0x5E042358CEDF6E77LL,0L,0xBBC0977FL,0xD9679FF5L,0x682FBA83L,0x1A65L};
static int64_t g_159 = (-2L);



static int16_t  func_1(void);
static uint8_t  func_17(uint8_t  p_18, int8_t  p_19, int32_t  p_20, uint64_t  p_21);
static uint16_t  func_22(int32_t  p_23, uint32_t  p_24, int16_t  p_25, struct S0  p_26, union U1  p_27);
static uint32_t  func_39(uint8_t  p_40, uint8_t  p_41, int8_t  p_42);




static int16_t  func_1(void)
{ 
    uint32_t l_2[1][5] = {{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL}};
    int32_t l_5[1][5];
    int8_t l_28 = (-10L);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_5[i][j] = 0x21705914L;
    }
    for (g_3[0][0] = 0; (g_3[0][0] <= 0); g_3[0][0] += 1)
    { 
        int8_t l_6 = 0xBEL;
        int32_t l_177 = 0x7AC40A1DL;
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            l_5[0][2] = (-1L);
            g_8++;
            for (l_6 = 0; (l_6 <= 0); l_6 += 1)
            { 
                struct S0 l_29 = {3UL,5L,1UL,1UL,4294967295UL,0x9F2EL};
                int i, j;
                if (l_2[l_6][(l_6 + 4)])
                    break;
                l_177 = (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(l_2[g_3[0][0]][(g_4 + 2)], (safe_add_func_int8_t_s_s(g_3[0][0], func_17((func_22(l_28, l_5[0][4], l_5[0][3], l_29, g_30) < 1UL), g_8, l_29.f4, l_28))))), l_6));
                if (g_4)
                    continue;
            }
        }
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        { 
            int i, j;
            if (l_2[g_3[0][0]][(g_4 + 3)])
                break;
        }
    }
    return g_86.f1;
}



static uint8_t  func_17(uint8_t  p_18, int8_t  p_19, int32_t  p_20, uint64_t  p_21)
{ 
    uint32_t l_161[4][2][1] = {{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL}}};
    int32_t l_174 = 0x13724E75L;
    int32_t l_175 = 0x98E093FEL;
    int32_t l_176 = 2L;
    int i, j, k;
    l_161[3][1][0]++;
    l_176 = ((g_81[3] <= (safe_mul_func_int8_t_s_s((0x5E37L > (safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((l_175 = (l_174 = ((g_86.f4 &= p_21) != 0xF84D8DA1L))), g_81[0])) | g_159) && l_161[3][1][0]), 1L)) > g_86.f2), l_161[3][1][0])), g_30.f0))), p_19))) < g_76);
    return l_161[2][0][0];
}



static uint16_t  func_22(int32_t  p_23, uint32_t  p_24, int16_t  p_25, struct S0  p_26, union U1  p_27)
{ 
    uint8_t l_43 = 248UL;
    int32_t l_112 = 0xAA845225L;
    uint16_t l_129 = 4UL;
    uint32_t l_158 = 0x238C9F0AL;
    int32_t l_160 = 0xECA1BBDAL;
    for (p_27.f2 = 13; (p_27.f2 == 8); --p_27.f2)
    { 
        uint32_t l_35 = 18446744073709551612UL;
        int32_t l_44[1][4][3] = {{{0L,0L,0L},{0L,0xD38C4615L,0L},{0L,0L,0L},{0L,0xD38C4615L,0L}}};
        int32_t l_110 = 2L;
        int i, j, k;
        if ((safe_rshift_func_uint8_t_u_u((((l_35 = (g_30.f3.f1 = 9L)) || (g_30.f0 , ((~(((safe_rshift_func_uint16_t_u_s(((func_39(l_43, (((l_44[0][0][0] |= 0UL) <= 0xA65C8BB6AF833954LL) || g_3[2][0]), g_3[0][0]) || l_43) && 0L), 14)) > l_35) == g_81[3])) != (-5L)))) < l_110), p_26.f2)))
        { 
            int32_t l_111 = 0xA0A60341L;
            int32_t l_117 = 0L;
            uint32_t l_121 = 0x6C2C3437L;
            l_112 = l_111;
            for (l_43 = 0; (l_43 <= 12); l_43 = safe_add_func_int8_t_s_s(l_43, 5))
            { 
                l_112 = ((safe_rshift_func_uint8_t_u_s(((l_117 |= l_112) > (l_43 || (((safe_add_func_uint16_t_u_u((g_30.f2 = ((((g_86.f1 = (((((l_44[0][0][0] |= ((((safe_unary_minus_func_uint8_t_u(((g_30.f0 | g_86.f4) & p_25))) != 0xAEL) != g_4) || g_81[3])) < g_8) || l_43) , 0UL) == 0xFF3A2FA3L)) > 0xFA6F56A42CAA49FFLL) && p_26.f0) < g_86.f5)), p_25)) , l_43) >= l_43))), 5)) && g_86.f2);
            }
            l_121++;
        }
        else
        { 
            int8_t l_124[3];
            int32_t l_125 = 0xC4FD0C6BL;
            int32_t l_126 = 0xC31A1128L;
            int32_t l_127 = 7L;
            int32_t l_128[3];
            int i;
            for (i = 0; i < 3; i++)
                l_124[i] = 1L;
            for (i = 0; i < 3; i++)
                l_128[i] = (-1L);
            ++l_129;
            l_128[1] = (~(l_44[0][0][0] = 0L));
            for (g_64 = 0; (g_64 <= 2); g_64 += 1)
            { 
                int i;
                l_128[g_64] = l_128[g_64];
                l_128[g_64] = (0x5E4BL <= (l_127 |= ((p_26.f3 > (safe_mod_func_uint64_t_u_u((g_64 , (p_24 & 0x7E36L)), p_26.f4))) > g_3[2][0])));
                if (g_86.f1)
                    break;
            }
        }
    }
    g_81[0] = ((((safe_add_func_uint64_t_u_u((+(((l_160 = ((safe_lshift_func_uint8_t_u_u((g_159 &= (((safe_lshift_func_uint16_t_u_s((((!(l_112 = ((l_158 &= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(l_112, (safe_rshift_func_int8_t_s_s(((g_86 , (safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((((((!(safe_mul_func_int16_t_s_s(p_26.f0, (!p_27.f2)))) == g_81[3]) >= 0x3EDDL) && p_26.f0) >= p_25) & 0x660AE4559E2955A4LL) && 1UL), p_27.f2)), 3UL))))) ^ 0x44BBC70BL), g_76)))), 4))) ^ g_81[3]))) > p_26.f2) > 0x90L), g_4)) > 0x59L) != p_23)), 4)) > (-1L))) , 0UL) <= g_8)), 18446744073709551613UL)) == g_86.f3) || g_4) < g_86.f1);
    return p_27.f0;
}



static uint32_t  func_39(uint8_t  p_40, uint8_t  p_41, int8_t  p_42)
{ 
    int64_t l_49 = 0x9061E9426CEFC6E2LL;
    const uint16_t l_63[1][1] = {{0x937BL}};
    int8_t l_71 = 0x46L;
    int32_t l_79 = 5L;
    uint8_t l_82 = 0xD8L;
    union U1 l_85 = {0x3DL};
    int16_t l_89 = (-1L);
    int i, j;
lbl_109:
    g_30.f1 = (safe_rshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s((l_49 , p_40), (((safe_sub_func_int32_t_s_s(p_42, p_42)) != l_49) | g_3[0][0]))) > g_30.f0) , p_41), 1));
    for (g_7 = 0; (g_7 <= 25); g_7 = safe_add_func_uint32_t_u_u(g_7, 7))
    { 
        uint8_t l_62 = 9UL;
        int32_t l_65 = 0xBCE866CAL;
        int32_t l_66[2][4] = {{0xEBFDCAE3L,0xEBFDCAE3L,0xEBFDCAE3L,0xEBFDCAE3L},{0xEBFDCAE3L,0xEBFDCAE3L,0xEBFDCAE3L,0xEBFDCAE3L}};
        int32_t l_102 = 0x67A1E796L;
        int i, j;
        l_66[0][0] ^= (l_65 = (g_64 &= ((safe_lshift_func_int8_t_s_s(((g_4 ^ (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((1L >= 0L) && (safe_mod_func_uint8_t_u_u((g_30.f0 || p_40), l_62))), p_42)), l_62))) < l_63[0][0]), 7)) , l_49)));
        if ((safe_rshift_func_int16_t_s_u(l_63[0][0], (safe_sub_func_int8_t_s_s((l_71 != 0x7D86L), ((safe_rshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(p_42, l_63[0][0])) == 0xCFL), 1)) | 4L))))))
        { 
            uint32_t l_77 = 1UL;
            int32_t l_80 = 0x0C815F77L;
            g_76 = g_30.f0;
            if (l_77)
            { 
                uint8_t l_78[3][4] = {{0xB0L,0x63L,0x86L,0x63L},{0x63L,0xB0L,0x9EL,0x9EL},{0x63L,0x63L,255UL,0x9EL}};
                int i, j;
                l_78[2][0] = g_30.f1;
                l_79 = l_66[0][0];
            }
            else
            { 
                ++l_82;
            }
            l_65 = (((l_85 , g_86) , (((safe_sub_func_int8_t_s_s((g_8 & 1UL), (-1L))) < l_89) < g_86.f3)) , 0x586BC1AFL);
        }
        else
        { 
            g_30.f1 = (safe_div_func_int16_t_s_s((l_66[1][1] = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(((((0x3EL != (safe_sub_func_int64_t_s_s((-8L), ((safe_lshift_func_int8_t_s_u(g_86.f1, 4)) != ((safe_add_func_int64_t_s_s((0x2DDDEE6403F479F8LL || g_86.f1), p_42)) | 0x72C46366L))))) <= l_102) <= 1UL) <= 6L), p_40)) >= g_86.f1), g_76))), g_30.f1));
        }
        l_79 = (safe_div_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(0xB33E2D46470AD0C7LL, l_89)) | (((((l_85.f1 = (safe_div_func_int32_t_s_s(g_86.f2, 4294967295UL))) | p_42) | 0x4DL) <= p_40) , 1L)), g_30.f2));
    }
    if (g_30.f2)
        goto lbl_109;
    return p_42;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);

    }
    transparent_crc(g_86.f0, "g_86.f0", print_hash_value);
    transparent_crc(g_86.f1, "g_86.f1", print_hash_value);
    transparent_crc(g_86.f2, "g_86.f2", print_hash_value);
    transparent_crc(g_86.f3, "g_86.f3", print_hash_value);
    transparent_crc(g_86.f4, "g_86.f4", print_hash_value);
    transparent_crc(g_86.f5, "g_86.f5", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
