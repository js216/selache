// SPDX-License-Identifier: MIT
// cctest_csmith_93e0617d.c --- cctest case csmith_93e0617d (csmith seed 2480955773)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x436890cb */
/* @exp_ticks 0x42b8 */

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

// Options:   -s 2480955773 -o /tmp/csmith_gen_t62vd0i6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint32_t  f1;
};

union U1 {
   uint32_t  f0;
   uint32_t  f1;
   struct S0  f2;
};


static uint64_t g_13[2][3] = {{0xF2E96673E7ED6F18LL,0xF2E96673E7ED6F18LL,0xF2E96673E7ED6F18LL},{0xF2E96673E7ED6F18LL,0xF2E96673E7ED6F18LL,0xF2E96673E7ED6F18LL}};
static const int32_t g_16 = 0x38D927F7L;
static struct S0 g_21 = {18446744073709551615UL,4294967288UL};
static int64_t g_22[2] = {0L,0L};
static uint16_t g_35 = 1UL;
static uint32_t g_48 = 0UL;
static int8_t g_56 = (-1L);
static int32_t g_81 = (-1L);
static int16_t g_84 = (-1L);
static int64_t g_92 = 0x18DB56EC41C9606ELL;
static union U1 g_104 = {0x523CF742L};
static uint32_t g_112 = 0x939A86ACL;
static int32_t g_133 = 0x774EDE3BL;



static int16_t  func_1(void);
static uint16_t  func_3(union U1  p_4);
static union U1  func_5(int32_t  p_6, uint8_t  p_7, int32_t  p_8);
static uint16_t  func_19(struct S0  p_20);




static int16_t  func_1(void)
{ 
    int32_t l_11 = 9L;
    int32_t l_12 = 0L;
    int32_t l_57 = (-2L);
    int32_t l_83 = 0x68BE14B9L;
    uint32_t l_85[1][2];
    struct S0 l_99 = {0x7E61D9E4L,4UL};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_85[i][j] = 1UL;
    }
    l_85[0][1] = (g_84 |= (l_83 = (!(func_3(func_5((l_57 ^= (safe_add_func_int32_t_s_s(l_11, ((g_13[0][2]++) | (((g_16 , (safe_add_func_uint16_t_u_u((l_12 = func_19(g_21)), l_11))) <= g_22[1]) == g_22[0]))))), l_11, g_22[1])) != 0x4599L))));
    if (((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((g_13[0][2] = (((0L ^ ((safe_mod_func_uint16_t_u_u(g_48, (l_83 = g_92))) != l_57)) <= (-1L)) || g_13[0][2])), l_85[0][1])), 5)) == 7L) ^ l_12) && 0UL))
    { 
        uint8_t l_93 = 0xCDL;
        union U1 l_105 = {18446744073709551607UL};
        int32_t l_125 = 0xAD14953BL;
        ++l_93;
        for (g_56 = 15; (g_56 >= (-15)); --g_56)
        { 
            struct S0 l_98 = {0x12C12148L,0x219EAC3BL};
            l_99 = l_98;
            for (l_11 = 0; (l_11 >= (-19)); l_11 = safe_sub_func_int8_t_s_s(l_11, 4))
            { 
                g_81 = g_48;
            }
        }
        for (l_11 = 0; (l_11 > (-9)); --l_11)
        { 
            uint32_t l_132[1];
            int32_t l_135[5][5][1];
            int32_t l_136 = 1L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_132[i] = 18446744073709551607UL;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_135[i][j][k] = (-6L);
                }
            }
            g_81 = ((l_105 = g_104) , (+((+(--g_48)) == 1L)));
            for (g_35 = 0; (g_35 == 13); g_35 = safe_add_func_uint32_t_u_u(g_35, 4))
            { 
                int32_t l_124[3];
                int32_t l_137 = 0x2604F267L;
                int i;
                for (i = 0; i < 3; i++)
                    l_124[i] = (-1L);
                g_112--;
                g_81 = (!(safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((g_133 &= ((safe_add_func_int32_t_s_s(((l_125 = (l_124[0] &= 18446744073709551607UL)) , ((safe_add_func_uint32_t_u_u((g_104.f2.f1 = (((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(0xA0E7L, (g_84 = l_132[0]))) , 0x90L), g_13[1][2])) | l_132[0]) != g_56)), (-9L))) <= 1UL)), l_132[0])) && g_81)), 4)) == g_13[0][0]), g_35)), 3UL)));
                l_137 = (((g_21.f0 <= (((l_136 ^= (g_21.f1 != ((safe_unary_minus_func_int32_t_s((-8L))) || (l_135[3][1][0] = l_105.f1)))) == 0L) == 3L)) | l_125) , 0x8541D729L);
            }
        }
    }
    else
    { 
        int8_t l_150 = 0x10L;
        for (g_21.f0 = 0; (g_21.f0 <= 37); ++g_21.f0)
        { 
            uint8_t l_151 = 246UL;
            int32_t l_160 = 0xDBFA8D9AL;
            for (g_81 = (-21); (g_81 > (-23)); g_81 = safe_sub_func_int8_t_s_s(g_81, 1))
            { 
                int16_t l_156 = 0x5D3EL;
                int8_t l_159[2];
                uint64_t l_161 = 18446744073709551615UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_159[i] = 0L;
                l_161 = ((safe_add_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((g_84 = ((0x0A5162D90DD55268LL ^ ((l_12 ^= 0x6EL) || (l_160 = (+((((((safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_151++), (safe_mul_func_int8_t_s_s(l_156, (safe_add_func_int64_t_s_s(l_159[0], l_99.f0)))))), g_104.f0)) && g_21.f1) , l_151) | g_16) , g_13[0][2]) >= 0x56F5L))))) == 0x8269CF34L)) && g_13[0][2]))), l_159[0])) || l_151);
            }
        }
    }
    return g_104.f0;
}



static uint16_t  func_3(union U1  p_4)
{ 
    int32_t l_80 = 0L;
    int32_t l_82 = (-1L);
    l_82 = (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(p_4.f0, (safe_unary_minus_func_int32_t_s(((((g_81 = (((g_35 = ((safe_rshift_func_int8_t_s_s((0x84L < (((safe_div_func_uint32_t_u_u((l_80 || ((l_80 && g_21.f0) >= l_80)), l_80)) == g_21.f1) != l_80)), l_80)) < g_21.f1)) || p_4.f0) == g_13[0][2])) != 0x0296L) != p_4.f1) == l_80))))), 2)), 3)) & l_80) , l_80);
    return l_80;
}



static union U1  func_5(int32_t  p_6, uint8_t  p_7, int32_t  p_8)
{ 
    int8_t l_62[3][2][2] = {{{2L,0L},{2L,2L}},{{0L,2L},{2L,0L}},{{2L,2L},{0L,2L}}};
    int32_t l_65[3];
    union U1 l_68 = {0x0E8BB0E3L};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_65[i] = 5L;
    p_8 = ((safe_sub_func_int32_t_s_s((((((safe_sub_func_uint8_t_u_u((l_62[0][0][0] & (l_65[1] = (safe_add_func_int16_t_s_s(p_6, p_7)))), (safe_add_func_int64_t_s_s(0x911F73439D6F4693LL, p_6)))) == 0xFD36L) && p_7) ^ l_62[0][0][0]) || g_48), 0x32F891D9L)) || 0xBD55L);
    return l_68;
}



static uint16_t  func_19(struct S0  p_20)
{ 
    uint32_t l_33 = 7UL;
    for (p_20.f1 = 0; (p_20.f1 <= 1); p_20.f1 += 1)
    { 
        int16_t l_34[1];
        int32_t l_47[5][5] = {{0xBE86DE1FL,0x56A6D983L,0x56A6D983L,0xBE86DE1FL,0x56A6D983L},{0x1E168459L,0x5C25CCEBL,(-1L),0x5C25CCEBL,0x1E168459L},{0x56A6D983L,0xBE86DE1FL,0x56A6D983L,0x56A6D983L,0xBE86DE1FL},{0x1E168459L,6L,0xD2AD05B3L,0x5C25CCEBL,0xD2AD05B3L},{0xBE86DE1FL,0xBE86DE1FL,0x5F8A4198L,0xBE86DE1FL,0xBE86DE1FL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_34[i] = 0xE0B2L;
        for (g_21.f0 = 0; (g_21.f0 <= 1); g_21.f0 += 1)
        { 
            int32_t l_36[1][4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_36[i][j] = 0x69CD17CDL;
            }
            l_36[0][1] = ((safe_mul_func_uint16_t_u_u(g_22[g_21.f0], g_22[g_21.f0])) & (safe_add_func_int64_t_s_s((g_35 &= (safe_sub_func_uint64_t_u_u((g_22[g_21.f0] ^ (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_16, l_33)), l_34[0]))), l_34[0]))), g_21.f1)));
            return g_22[1];
        }
        l_47[1][0] = (safe_rshift_func_uint16_t_u_u(p_20.f0, ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_34[0], (safe_lshift_func_uint8_t_u_s(((l_33 & ((g_21.f1 || p_20.f1) ^ 0x3DE3L)) | 0x0F181E214356E3F0LL), l_34[0])))), l_33)), 0x41L)) >= 0xD69FDB81L)));
        g_48 |= (g_16 , ((1UL || p_20.f1) > 0x779E46EDL));
    }
    for (g_21.f0 = 0; (g_21.f0 > 12); ++g_21.f0)
    { 
        uint8_t l_55 = 0x2BL;
        g_56 = (safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(l_33, (l_55 |= 65535UL))) < g_48) , g_21.f0), p_20.f1));
    }
    return l_33;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
