// SPDX-License-Identifier: MIT
// cctest_csmith_c634a0d0.c --- cctest case csmith_c634a0d0 (csmith seed 3325337808)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7191c095 */
/* @exp_ticks 0x350f */

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

// Options:   -s 3325337808 -o /tmp/csmith_gen_x2u62e35/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   const uint16_t  f2;
   const int8_t  f3;
   const int32_t  f4;
};

union U1 {
   uint64_t  f0;
   int32_t  f1;
   const int32_t  f2;
};


static int8_t g_2 = 1L;
static uint8_t g_3 = 0xC4L;
static int64_t g_4[5] = {0x63126FF23B1A9565LL,0x63126FF23B1A9565LL,0x63126FF23B1A9565LL,0x63126FF23B1A9565LL,0x63126FF23B1A9565LL};
static uint8_t g_10[3] = {1UL,1UL,1UL};
static uint32_t g_28 = 0xBB1BB30BL;
static int32_t g_53 = 0x64F69674L;
static uint8_t g_56 = 0UL;
static uint32_t g_66 = 18446744073709551615UL;
static int16_t g_88 = 0x6D89L;
static int64_t g_91 = 0xD3E82D738A40F947LL;
static uint32_t g_102 = 4UL;
static uint32_t g_121 = 0UL;
static uint32_t g_136 = 0xA46356B4L;
static uint16_t g_141 = 0x2463L;
static int32_t g_150[2] = {4L,4L};
static union U1 g_188 = {0xAD08EFB34F4D14C4LL};
static int32_t g_192 = (-1L);
static uint64_t g_210[3] = {0UL,0UL,0UL};



static uint64_t  func_1(void);
static int64_t  func_17(const uint8_t  p_18, struct S0  p_19);
static struct S0  func_21(const int32_t  p_22, int8_t  p_23, int32_t  p_24, uint16_t  p_25);
static int32_t  func_40(int32_t  p_41);




static uint64_t  func_1(void)
{ 
    const int64_t l_20 = 0x84B7B831966C4779LL;
    int32_t l_163 = 7L;
    int32_t l_165 = 0xB34ADFA8L;
    int32_t l_169[4] = {(-2L),(-2L),(-2L),(-2L)};
    int16_t l_170 = 0x7391L;
    uint16_t l_171 = 65526UL;
    uint16_t l_209 = 0x8BACL;
    int32_t l_231[5][4] = {{(-2L),0xE85B977AL,(-2L),0xE85B977AL},{(-2L),0xE85B977AL,(-2L),0xE85B977AL},{(-2L),0xE85B977AL,(-2L),0xE85B977AL},{(-2L),0xE85B977AL,(-2L),0xE85B977AL},{(-2L),0xE85B977AL,(-2L),0xE85B977AL}};
    int i, j;
    if ((g_3 = g_2))
    { 
        uint32_t l_12 = 0xAB89BDD7L;
lbl_164:
        for (g_3 = 0; (g_3 <= 4); g_3 += 1)
        { 
            int i;
            return g_4[g_3];
        }
        for (g_3 = 0; (g_3 >= 14); g_3 = safe_add_func_int16_t_s_s(g_3, 2))
        { 
            int32_t l_9 = 6L;
            l_12 |= ((safe_sub_func_int64_t_s_s(l_9, ((g_10[1] = 0xF29ACD409884CB8FLL) < (g_4[0] > (!18446744073709551606UL))))) || g_2);
            l_163 = ((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((func_17(l_20, func_21(l_20, l_12, (g_10[2] & g_2), g_2)) , l_9), 7)) ^ g_10[1]), l_20)) >= l_9);
            if (g_102)
                continue;
        }
        if (g_88)
            goto lbl_164;
    }
    else
    { 
        int64_t l_166 = 0xFD9258287A3C9283LL;
        int32_t l_167 = 0x2B190C61L;
        int32_t l_168[2];
        int32_t l_183[4][4][5] = {{{0xA4A7757DL,(-4L),0xA4A7757DL,(-4L),0xA4A7757DL},{1L,1L,0L,0L,1L},{1L,(-4L),1L,(-4L),1L},{1L,0L,0L,1L,1L}},{{0xA4A7757DL,(-4L),0xA4A7757DL,(-4L),0xA4A7757DL},{1L,1L,0L,0L,1L},{1L,(-4L),1L,(-4L),1L},{1L,0L,0L,1L,1L}},{{0xA4A7757DL,(-4L),0xA4A7757DL,(-4L),0xA4A7757DL},{1L,1L,0L,0L,1L},{1L,(-4L),1L,(-4L),1L},{1L,0L,0L,1L,1L}},{{0xA4A7757DL,(-4L),0xA4A7757DL,(-4L),0xA4A7757DL},{1L,1L,0L,0L,1L},{1L,(-4L),1L,(-4L),1L},{1L,0L,0L,1L,1L}}};
        uint64_t l_217 = 0UL;
        int32_t l_247 = 0x2DA774B3L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_168[i] = (-1L);
lbl_248:
        --l_171;
        if (((g_88 = (((safe_unary_minus_func_uint32_t_u(((((l_163 = (((safe_lshift_func_int8_t_s_u(g_2, ((safe_sub_func_int64_t_s_s(((l_168[1] ^ (0xE9C46E93L | ((safe_add_func_uint32_t_u_u(5UL, g_10[1])) >= g_53))) | l_170), g_3)) < l_168[1]))) || g_28) < l_170)) , g_150[1]) , l_183[3][0][4]) <= l_183[3][0][4]))) | 8UL) == g_10[1])) >= 0x8B02L))
        { 
            uint32_t l_191 = 18446744073709551607UL;
            int32_t l_212 = (-1L);
            if ((g_150[0] | ((safe_div_func_int8_t_s_s(l_20, (l_191 ^= (((((safe_lshift_func_int16_t_s_s((g_188 , (((l_168[1] = ((g_188.f1 = ((safe_div_func_int32_t_s_s(g_141, g_88)) > g_188.f2)) & g_56)) | g_10[1]) >= 2L)), l_165)) && l_168[1]) != g_10[1]) , g_53) ^ g_10[1])))) == g_192)))
            { 
                uint16_t l_211 = 0x9640L;
                g_150[1] = ((safe_lshift_func_uint16_t_u_u(0xD7F8L, (l_166 && ((g_10[1] = l_165) >= ((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((g_4[4] != g_28), l_168[1])), g_188.f2)) & 0xFA9163CD058DED1CLL))))) ^ g_56);
                g_150[0] = ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_2 = 0x46L), (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_136, l_209)), 1)))), g_28)), l_168[1])) , g_210[2]);
                l_211 &= l_165;
            }
            else
            { 
                g_150[1] = ((l_212 = l_191) > g_150[1]);
                l_169[1] = ((g_91 && l_191) ^ 255UL);
            }
        }
        else
        { 
            const int16_t l_218 = 0xD20DL;
            uint32_t l_244 = 0UL;
            if (((l_170 >= ((0L >= (safe_sub_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(((g_10[1] & (g_188.f1 , l_217)) ^ l_20), 65535UL)) && 0x3E9CL) > l_218), l_166))) != 0x9C1BF1E5L)) && l_168[0]))
            { 
                uint64_t l_232 = 0x55306404F572883FLL;
                uint32_t l_233 = 0x5DD1E5A3L;
                g_192 = (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(g_210[2], (((safe_sub_func_uint32_t_u_u(((g_141 ^= (g_150[1] ^ (safe_lshift_func_uint8_t_u_u(1UL, ((((((g_188.f1 = (safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_218, (-7L))), l_231[0][0]))) > 0xCEE96C84L) != g_53) >= g_91) >= l_232) | l_232))))) | 1L), l_183[3][0][4])) == l_233) | l_233))), 11));
            }
            else
            { 
                g_188.f1 = (0xC6D4E311F9259F18LL <= ((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(g_56, (4294967295UL ^ (safe_lshift_func_int8_t_s_s((l_168[0] = ((safe_add_func_int8_t_s_s(g_4[0], l_168[1])) || l_167)), 4))))) ^ 3UL), l_217)) <= l_244), 0xFC40L)) <= 0x6E5DL));
            }
            g_192 &= (safe_add_func_int32_t_s_s(9L, g_210[0]));
            return l_247;
        }
        if (g_136)
            goto lbl_248;
    }
    return g_136;
}



static int64_t  func_17(const uint8_t  p_18, struct S0  p_19)
{ 
    int32_t l_155 = (-8L);
    int32_t l_156 = 0x601976A6L;
    int32_t l_161 = 4L;
    int32_t l_162 = 0xA29FBB94L;
    g_150[1] = (safe_sub_func_int8_t_s_s(((l_156 = l_155) != (safe_lshift_func_uint8_t_u_u(((l_161 = (p_18 , ((safe_add_func_uint64_t_u_u(p_19.f1, l_155)) && 0x81L))) , p_18), g_136))), l_155));
    l_162 |= (-3L);
    return l_156;
}



static struct S0  func_21(const int32_t  p_22, int8_t  p_23, int32_t  p_24, uint16_t  p_25)
{ 
    int64_t l_36 = 0xA81F6ED734895C4BLL;
    uint32_t l_37 = 0x77D900D2L;
    uint8_t l_46 = 0x49L;
    int32_t l_51 = 0L;
    int16_t l_95 = 0x9E04L;
    uint64_t l_148 = 1UL;
    int32_t l_149 = 0xD879D1BAL;
    int32_t l_151 = 0L;
    struct S0 l_152 = {0xE3D7E29C1E949441LL,0xD3L,0UL,0xD2L,0xD4CF2364L};
    for (p_23 = 8; (p_23 == (-17)); p_23--)
    { 
        const uint32_t l_38 = 0x6DAE1DC6L;
        int32_t l_39 = 0xDA828C04L;
        int64_t l_52 = 0xBABE4A9FF1DB06D6LL;
        struct S0 l_89 = {7UL,3UL,65535UL,-3L,0L};
        g_28 |= (p_25 & (g_10[1] , p_22));
        for (p_25 = 0; (p_25 <= 14); p_25 = safe_add_func_int8_t_s_s(p_25, 2))
        { 
            int8_t l_33 = 0L;
            l_39 = ((safe_sub_func_int32_t_s_s(l_33, (safe_sub_func_uint16_t_u_u(l_36, ((l_37 != g_2) , l_38))))) ^ p_23);
        }
        if (func_40((safe_add_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u(l_46, (g_53 = ((((((l_51 = ((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((0x9980A6F8L <= l_39) , (-6L)) >= g_4[4]), 7)) == l_46), p_24)) , g_10[1])) > l_52) | 0xC0L) > g_10[2]) <= 65529UL) , 3UL)))) > 0xABL) , p_24), p_22))))
        { 
            uint16_t l_84 = 0xAADDL;
            int32_t l_85 = 0x3A0D6743L;
            l_85 ^= ((safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(p_25, (safe_div_func_uint32_t_u_u(l_38, 0xFDEA9412L)))), (p_24 >= l_46))) == l_84);
        }
        else
        { 
            uint64_t l_90 = 18446744073709551615UL;
            if (((0xBB7C4EAEL <= g_4[1]) || (safe_mod_func_uint64_t_u_u(((g_88 |= 0x1713L) , (l_89 , l_90)), 0x4A0BD6DA29A6A910LL))))
            { 
                uint16_t l_92[4][3];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_92[i][j] = 0x5F02L;
                }
                g_91 &= (4294967295UL < p_23);
                l_92[3][0] &= g_4[0];
            }
            else
            { 
                const int32_t l_96 = 0xBB395F0FL;
                int32_t l_101 = 6L;
                g_102 = ((((l_95 < l_96) != (safe_lshift_func_int16_t_s_u((l_39 ^= ((safe_rshift_func_int8_t_s_s(((g_3 ^ (l_101 & g_10[1])) , g_91), p_25)) || g_53)), 9))) & 0L) <= l_96);
                if (p_23)
                    continue;
                p_24 |= (l_36 ^ (safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((((g_4[3] = ((((((safe_add_func_int32_t_s_s((((safe_div_func_uint64_t_u_u(((g_91 , 0UL) > ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((+(g_4[2] | p_25)))), 3)) ^ 0x9726E956L)), 0x091CAA3E211E8D53LL)) && 0UL) && g_10[1]), 0x0C07BB3EL)) >= 0xEE733D09B3387B99LL) , g_28) && g_91) ^ p_23) >= l_101)) > 18446744073709551612UL) , 0xC6319732EC2C21BELL), l_90)), l_101)));
            }
            if ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((p_22 ^ 0x794FL), g_91)), 2)))
            { 
                int32_t l_134[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_134[i] = 0x3B60DBC4L;
                g_121--;
                p_24 = (((safe_add_func_uint16_t_u_u((l_134[0] = (safe_add_func_uint32_t_u_u(((++g_28) ^ (safe_sub_func_uint32_t_u_u((0UL | ((safe_mul_func_int8_t_s_s(((((((l_39 ^= p_25) ^ p_22) , ((l_51 > 0xA1CE40C6L) != 3UL)) , l_90) , g_2) , (-9L)), g_66)) ^ g_3)), p_22))), g_91))), (-1L))) <= 0x527752A06A2A823BLL) || (-1L));
                g_136 = (((p_25 && (0x0F596B175D022AC7LL & (safe_unary_minus_func_int8_t_s((l_134[0] == (p_22 >= l_89.f1)))))) <= g_4[2]) <= 0xE94AL);
            }
            else
            { 
                return l_89;
            }
        }
    }
    g_141 = (p_22 & ((safe_rshift_func_int16_t_s_s(p_24, 0)) || (safe_add_func_int8_t_s_s(0x55L, p_22))));
    l_151 = (safe_rshift_func_int16_t_s_u((g_88 = (((l_51 = (0xD1505295FBE9E82CLL <= (g_150[1] &= ((safe_mod_func_uint16_t_u_u(g_56, ((((((l_149 ^= ((l_51 < (safe_rshift_func_int8_t_s_s(l_148, 6))) | 247UL)) <= (-7L)) < 9UL) <= (-1L)) , p_22) ^ 247UL))) && (-1L))))) ^ p_25) , 0xB14AL)), g_4[1]));
    return l_152;
}



static int32_t  func_40(int32_t  p_41)
{ 
    int32_t l_75 = 0x3A9B16E5L;
    for (g_53 = (-26); (g_53 > (-15)); g_53 = safe_add_func_uint8_t_u_u(g_53, 2))
    { 
        uint32_t l_76 = 18446744073709551615UL;
        int32_t l_77 = 0xA67FE427L;
        g_56++;
        p_41 = (((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_41, 7)), ((g_66 |= (!0xBAC3F408L)) | (((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_u((((((((safe_div_func_int64_t_s_s((((l_75 < ((((l_75 || (-3L)) & l_75) && p_41) , (-1L))) & (-3L)) , g_10[1]), g_53)) < 2UL) == l_75) == 1UL) == p_41) ^ p_41) >= p_41), 13)) | 0x127326B30262A889LL) | 252UL) & 0UL) | p_41), l_76)), p_41)) <= 0xD7CB6898L) >= p_41)))), 13)) >= l_77) ^ 0L) > 0xF1L) && g_56);
    }
    for (g_2 = 0; g_2 < 5; g_2 += 1)
    {
        g_4[g_2] = 0x66A4DCBD99A0A080LL;
    }
    return l_75;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);

    }
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);

    }
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_210[i], "g_210[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
