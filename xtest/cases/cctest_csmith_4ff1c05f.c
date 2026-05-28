// SPDX-License-Identifier: MIT
// cctest_csmith_4ff1c05f.c --- cctest case csmith_4ff1c05f (csmith seed 1341243487)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe40cf504 */
/* @exp_ticks 0x516d */

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

// Options:   -s 1341243487 -o /tmp/csmith_gen_0tjve2oe/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const int64_t  f1;
   uint16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int32_t  f0;
   int64_t  f1;
   uint16_t  f2;
   int32_t  f3;
   int64_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int16_t  f0;
   const struct S0  f1;
   int32_t  f2;
   const uint8_t  f3;
   int16_t  f4;
};
#pragma pack(pop)

struct S3 {
   struct S1  f0;
   uint8_t  f1;
   int16_t  f2;
};

struct S4 {
   uint32_t  f0;
   struct S2  f1;
};

union U5 {
   uint32_t  f0;
};

union U6 {
   uint8_t  f0;
   struct S4  f1;
   uint16_t  f2;
   uint64_t  f3;
};

union U7 {
   uint32_t  f0;
};

union U8 {
   int16_t  f0;
};


static union U5 g_7 = {0x8C007C7BL};
static int16_t g_11 = 1L;
static int32_t g_12 = 0xBC8B421DL;
static int8_t g_14 = (-1L);
static int16_t g_15 = 0x4677L;
static int16_t g_16 = 1L;
static int32_t g_17 = 7L;
static int8_t g_18[2][4] = {{4L,4L,4L,4L},{4L,4L,4L,4L}};
static int32_t g_19 = (-1L);
static int16_t g_20 = 0x903CL;
static uint32_t g_21[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static struct S4 g_64 = {1UL,{-7L,{-9L,-1L,5UL},-5L,249UL,-1L}};
static uint8_t g_65[4] = {246UL,246UL,246UL,246UL};
static int32_t g_83 = 0xA05350A1L;
static uint32_t g_84 = 0UL;
static uint16_t g_93 = 0xBAF6L;
static int32_t g_125 = (-9L);
static uint64_t g_128 = 18446744073709551615UL;
static uint8_t g_136 = 0x9EL;
static uint16_t g_137 = 0xECABL;
static struct S1 g_141[2][2] = {{{8L,0xC6884E9DD67387AFLL,0UL,0L,-1L,0x0A344D22L},{8L,0xC6884E9DD67387AFLL,0UL,0L,-1L,0x0A344D22L}},{{8L,0xC6884E9DD67387AFLL,0UL,0L,-1L,0x0A344D22L},{8L,0xC6884E9DD67387AFLL,0UL,0L,-1L,0x0A344D22L}}};
static union U7 g_150[1] = {{7UL}};
static const union U6 g_184 = {7UL};
static int8_t g_232 = 0xDEL;
static struct S3 g_259[3][2][1] = {{{{{0L,0xBA6B4429329F13FCLL,65535UL,0xCC3EDE10L,0x61C8AACF54AA532DLL,1L},0x06L,0xAA7EL}},{{{-7L,0x2BF14A9805B7D3CALL,65533UL,0x0922DE0CL,-5L,-1L},0UL,0x0380L}}},{{{{0L,0xBA6B4429329F13FCLL,65535UL,0xCC3EDE10L,0x61C8AACF54AA532DLL,1L},0x06L,0xAA7EL}},{{{-7L,0x2BF14A9805B7D3CALL,65533UL,0x0922DE0CL,-5L,-1L},0UL,0x0380L}}},{{{{0L,0xBA6B4429329F13FCLL,65535UL,0xCC3EDE10L,0x61C8AACF54AA532DLL,1L},0x06L,0xAA7EL}},{{{-7L,0x2BF14A9805B7D3CALL,65533UL,0x0922DE0CL,-5L,-1L},0UL,0x0380L}}}};
static union U8 g_312 = {1L};



static int8_t  func_1(void);
static int64_t  func_3(union U5  p_4, uint32_t  p_5, int8_t  p_6);
static uint32_t  func_26(struct S4  p_27, int8_t  p_28);
static uint64_t  func_30(union U8  p_31);




static int8_t  func_1(void)
{ 
    uint16_t l_2 = 6UL;
    int32_t l_8 = 0xDAC7A8CFL;
    int32_t l_9 = 0x4E26C12AL;
    int32_t l_10 = 0L;
    int32_t l_13[5][5];
    uint32_t l_327 = 18446744073709551613UL;
    int16_t l_328 = 0xD7D3L;
    uint64_t l_331 = 3UL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_13[i][j] = 0xC257A10DL;
    }
lbl_316:
    l_8 = (l_2 == func_3(g_7, (l_2 , (++g_21[1][1])), (l_13[2][2] = (l_9 && 0x71L))));
    for (g_64.f1.f0 = 0; (g_64.f1.f0 > (-6)); --g_64.f1.f0)
    { 
        int32_t l_263 = 0x5FC095F3L;
        int32_t l_315[3][2] = {{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)}};
        int i, j;
        if (g_21[1][1])
            break;
        if ((safe_div_func_uint64_t_u_u((((((g_259[1][0][0] , (~((safe_mul_func_int8_t_s_s(l_263, l_263)) == l_263))) <= l_13[2][2]) != g_141[0][0].f3) || 1L) <= g_64.f1.f1.f1), (-1L))))
        { 
            int32_t l_273 = 0x87BE3B7BL;
            int64_t l_274 = (-9L);
            int32_t l_275 = 0xD2622572L;
            g_17 &= (safe_rshift_func_int16_t_s_s(g_128, (safe_unary_minus_func_int32_t_s((l_275 ^= (safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(l_273, 1)), g_64.f1.f1.f1)) <= ((l_273 <= 0xAA7BE89E88DAE93ELL) > g_21[1][0])) >= l_13[2][1]), l_274)))))));
            return g_19;
        }
        else
        { 
            uint8_t l_276 = 0xC0L;
            struct S0 l_287[3] = {{6L,0xC542C82936B54799LL,65531UL},{6L,0xC542C82936B54799LL,65531UL},{6L,0xC542C82936B54799LL,65531UL}};
            uint64_t l_313 = 0UL;
            int32_t l_325 = 0x8363C87DL;
            int i;
            l_276 = l_10;
            if (((g_259[1][0][0].f0.f1 , l_263) & (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((1L && l_263), g_83)), 5)), g_232)) > g_141[0][0].f1), g_18[0][1]))))
            { 
                return l_10;
            }
            else
            { 
                g_141[0][0].f5 = 4L;
            }
            if ((safe_add_func_int16_t_s_s(l_276, (l_287[2] , g_128))))
            { 
                int64_t l_314[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_314[i] = 7L;
                g_83 = (((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((l_263 ^= 0xF3BFE32FL) < (g_65[0] <= (((((safe_lshift_func_int16_t_s_s(((-3L) & (safe_add_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((g_312 , l_313) | 0x89FCL) < g_232), g_141[0][0].f4)), 1L)), 255UL)) | g_141[0][0].f4), g_259[1][0][0].f0.f1)), g_259[1][0][0].f0.f3)) < 0xFD082DB4L), l_10)), 0x9EL)), l_314[4])) & (-1L)) && 0x24L), l_314[4]))), 14)) && l_287[2].f1) >= l_9) , g_12) <= 0L))) == l_315[1][1]), 15)) & 0x5511DEB27686EDB6LL), 10)) < l_13[3][3]) & l_287[2].f0);
                if (g_64.f1.f1.f0)
                    goto lbl_316;
                g_141[0][0].f5 = l_314[4];
            }
            else
            { 
                uint16_t l_326 = 0x0398L;
                int32_t l_329 = 0xCFC9BDEFL;
                int32_t l_330 = (-1L);
                l_287[2].f0 = (((safe_rshift_func_uint16_t_u_u(l_287[2].f0, (safe_add_func_uint8_t_u_u(((((((safe_sub_func_uint64_t_u_u(l_263, (safe_mul_func_int16_t_s_s((g_15 &= (g_11 = (((l_325 = g_21[1][1]) == ((((((((-4L) >= l_326) <= g_65[3]) & 0x662958AF8EF0C7B7LL) | l_315[1][1]) & l_13[4][4]) >= 2UL) ^ l_315[1][1])) <= g_128))), g_136)))) || l_326) <= l_13[2][2]) && l_315[1][1]) && l_313) == l_327), 0x09L)))) ^ 0x1346L) <= 0x89L);
                l_331++;
            }
        }
    }
    return l_13[2][2];
}



static int64_t  func_3(union U5  p_4, uint32_t  p_5, int8_t  p_6)
{ 
    struct S4 l_29 = {1UL,{0x0689L,{0xB5C1ED52L,0x7F1FF7CD2BAB91EELL,0x28DBL},0L,0UL,0x4E78L}};
    union U8 l_32 = {1L};
    union U8 l_33 = {-1L};
    int32_t l_198[3];
    struct S3 l_214 = {{0xA9842A2DL,-1L,0UL,-1L,7L,0L},255UL,9L};
    int i;
    for (i = 0; i < 3; i++)
        l_198[i] = 0x0A66F28AL;
    l_29.f1.f2 = ((safe_add_func_uint32_t_u_u(func_26(l_29, (((g_18[0][1] > ((g_93 ^= func_30((l_33 = l_32))) | l_29.f1.f2)) > 0x9EB2L) < g_64.f1.f2)), p_6)) | l_29.f1.f1.f0);
    if ((safe_sub_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((((g_7 , p_4.f0) == (g_184 , g_14)) == g_125), 0UL)) && l_29.f1.f1.f0) > 0L), 0xDAL)))
    { 
        struct S2 l_194 = {0x2F70L,{-1L,0x7DD8A53DBADB8ECALL,1UL},-3L,0x04L,0xF63FL};
        for (g_128 = 21; (g_128 == 33); ++g_128)
        { 
            l_29.f1.f2 = g_128;
            if ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((~g_64.f1.f3), 2)) <= (safe_mul_func_uint8_t_u_u(((0x81L <= ((l_194 , p_4) , p_5)) == 0xB0BD1E669E116460LL), l_194.f1.f2))) | l_33.f0), 0xFEL)))
            { 
                return p_5;
            }
            else
            { 
                return g_64.f1.f2;
            }
        }
    }
    else
    { 
        uint32_t l_195 = 0UL;
        int32_t l_196 = 0x23623D71L;
        int32_t l_197 = 0xD56D9DE8L;
        uint8_t l_199 = 0x69L;
        l_195 = 0xC81F13F5L;
        --l_199;
    }
    if (p_4.f0)
    { 
        int32_t l_202 = (-1L);
        uint16_t l_203 = 0x02C7L;
        l_203 = l_202;
    }
    else
    { 
        int16_t l_208 = 0xD823L;
        int32_t l_210 = 0L;
        union U8 l_225 = {0x163FL};
        int16_t l_241 = 0x0232L;
        uint64_t l_247 = 1UL;
        for (g_16 = (-8); (g_16 < 9); g_16++)
        { 
            uint32_t l_215 = 0x7215B510L;
            int32_t l_220 = 0x2817E8D0L;
            for (p_5 = 0; (p_5 != 7); ++p_5)
            { 
                int32_t l_209 = (-5L);
                l_210 = ((((((0x34EB4003759828F9LL == ((0x7DD1L || l_29.f0) || ((l_208 |= ((p_4.f0 > (-5L)) ^ 0xBD2F6D19L)) && l_209))) <= l_210) || p_4.f0) != p_5) <= 0x8FD2L) >= 2L);
                l_210 = ((safe_sub_func_uint8_t_u_u(((l_210 & ((safe_unary_minus_func_uint16_t_u(((l_214 , g_184) , 65535UL))) != l_215)) < l_215), g_21[1][1])) != l_208);
                g_83 |= (l_208 , p_5);
            }
            for (l_32.f0 = 0; (l_32.f0 < 17); l_32.f0 = safe_add_func_int16_t_s_s(l_32.f0, 9))
            { 
                uint32_t l_221 = 0xB133B268L;
                int32_t l_222 = (-4L);
                l_210 |= ((safe_add_func_int16_t_s_s(g_12, ((g_64.f1.f0 = (p_6 , (l_221 = ((l_220 ^= (l_29.f1.f1 , 0x9AL)) < p_5)))) ^ l_222))) < 0UL);
                if (p_6)
                    continue;
                l_220 = (((safe_mul_func_uint8_t_u_u((g_65[3] ^= (p_4.f0 & (((l_225 , (safe_add_func_int64_t_s_s(0xF4D8658CB6D31D16LL, (safe_rshift_func_uint16_t_u_s(((l_215 > 0xF59F0243171BACBCLL) | g_141[0][0].f0), 9))))) & 0x4960L) >= p_4.f0))), l_210)) == l_225.f0) < p_5);
            }
            for (l_33.f0 = 13; (l_33.f0 != (-8)); l_33.f0 = safe_sub_func_int64_t_s_s(l_33.f0, 7))
            { 
                return p_6;
            }
        }
        l_210 = (g_232 != (((l_214.f0.f3 = g_141[0][0].f2) | ((((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(g_84)), (safe_div_func_uint32_t_u_u(((+((safe_lshift_func_int16_t_s_s(l_214.f0.f1, g_150[0].f0)) , g_16)) & g_64.f1.f1.f2), 0x40AD9BB9L)))) > l_241) == g_84) >= g_64.f0)) || 5UL));
        for (l_214.f0.f4 = 15; (l_214.f0.f4 > 1); --l_214.f0.f4)
        { 
            struct S0 l_250 = {0x76DFE5F2L,-1L,1UL};
            for (g_93 = 0; (g_93 != 57); ++g_93)
            { 
                int64_t l_246 = 0x91BAE6FE1DB370B6LL;
                l_247++;
            }
            l_210 = (l_250 , (l_250.f0 |= ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(l_208, p_6)), ((g_11 && 0L) | g_17))) <= g_64.f1.f4)));
            g_141[0][0].f3 = (((p_6 >= (l_250.f0 |= g_141[0][0].f2)) == ((-5L) > g_64.f1.f1.f1)) == 8L);
        }
    }
    return p_4.f0;
}



static uint32_t  func_26(struct S4  p_27, int8_t  p_28)
{ 
    uint16_t l_103[4];
    int32_t l_122[2][2];
    const union U5 l_160 = {0UL};
    int32_t l_178[4] = {0x1C6119FCL,0x1C6119FCL,0x1C6119FCL,0x1C6119FCL};
    int32_t l_179 = 0x5EADAE25L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_103[i] = 65533UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_122[i][j] = 0L;
    }
    for (g_7.f0 = (-1); (g_7.f0 <= 2); g_7.f0 = safe_add_func_uint16_t_u_u(g_7.f0, 7))
    { 
        int32_t l_100 = 0xF6C300DCL;
        int32_t l_114 = 0L;
        int32_t l_126 = (-1L);
        uint32_t l_164[5][3][5] = {{{18446744073709551615UL,18446744073709551615UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L},{0xC3209DC7L,0xC3209DC7L,0UL,0xEECD969FL,0UL},{8UL,8UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L}},{{0xC3209DC7L,0xC3209DC7L,0UL,0xEECD969FL,0UL},{8UL,8UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L},{0xC3209DC7L,0xC3209DC7L,0UL,0xEECD969FL,0UL}},{{8UL,8UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L},{0xC3209DC7L,0xC3209DC7L,0UL,0xEECD969FL,0UL},{8UL,8UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L}},{{0xC3209DC7L,0xC3209DC7L,0UL,0xEECD969FL,0UL},{8UL,8UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L},{0xC3209DC7L,0xC3209DC7L,0UL,0xEECD969FL,0UL}},{{8UL,8UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L},{0xC3209DC7L,0xC3209DC7L,0UL,0xEECD969FL,0UL},{8UL,8UL,0xA76CD9F9L,0xB4C5E673L,0xA76CD9F9L}}};
        int i, j, k;
        l_103[2] = ((((safe_mul_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((l_100 == 0UL), (((p_27.f1.f2 == ((safe_mod_func_uint16_t_u_u(0xA9B0L, 7UL)) ^ 0L)) != g_93) , p_27.f1.f1.f1))) & p_27.f1.f4) <= g_64.f1.f1.f0), g_93)) & g_64.f1.f4) & g_64.f1.f1.f0) <= p_27.f1.f1.f0);
        if (g_64.f0)
        { 
            int8_t l_121[1][5][3] = {{{3L,(-2L),3L},{0x61L,0x61L,0x61L},{3L,(-2L),3L},{0x61L,0x61L,0x61L},{3L,(-2L),3L}}};
            int32_t l_123 = 5L;
            int32_t l_124 = 0xB57048E4L;
            int32_t l_127 = 1L;
            const union U5 l_135[4][3] = {{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}}};
            int i, j, k;
            for (g_64.f0 = 0; (g_64.f0 <= 2); g_64.f0++)
            { 
                p_27.f1.f2 = (safe_sub_func_int64_t_s_s(((l_100 >= (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(l_114, (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(g_65[0], (safe_lshift_func_int8_t_s_u((l_114 >= l_103[2]), l_121[0][0][0])))), l_121[0][0][0])))), 0x7756L)) && l_114), g_64.f0))) , 0x13A919A52CA836B0LL), l_103[3]));
                l_100 ^= (-5L);
            }
            ++g_128;
            p_27.f1.f2 = (safe_div_func_int16_t_s_s(0x2A7CL, (l_126 , ((((l_127 = ((g_136 = (safe_sub_func_uint8_t_u_u(((l_135[3][1] , p_27) , 1UL), g_64.f1.f1.f2))) < p_27.f1.f0)) >= g_18[0][2]) < g_137) && 0x7D816591L))));
        }
        else
        { 
            int64_t l_146 = 0xF72A5219CEA36B5BLL;
            struct S1 l_147 = {0x4801D254L,0L,6UL,0x6CA934EAL,0x919A6FF33249D86CLL,-5L};
            union U7 l_149 = {4294967287UL};
            for (p_27.f1.f0 = 0; (p_27.f1.f0 >= 13); p_27.f1.f0++)
            { 
                uint8_t l_148 = 0UL;
                l_122[1][1] = (+(g_141[0][0] , (1L || (l_148 = ((safe_div_func_int16_t_s_s((p_27.f1.f4 ^= (safe_add_func_uint16_t_u_u(l_146, ((l_147 , g_20) < g_17)))), g_93)) , g_14)))));
            }
            if (((g_150[0] = l_149) , (((((l_103[0] == (safe_div_func_uint16_t_u_u((l_147.f5 = (((!(safe_mul_func_uint16_t_u_u((((0x5F070AD0L && (safe_rshift_func_uint8_t_u_u((((((p_27.f1.f2 |= (safe_mod_func_uint16_t_u_u(g_137, 0x7E55L))) ^ l_146) || p_27.f1.f1.f2) ^ p_27.f1.f1.f2) | l_147.f5), 1))) ^ 0x8DACC9C7L) <= p_27.f1.f0), 0xDE77L))) | (-1L)) , l_103[2])), l_103[2]))) | l_103[2]) , l_114) , l_160) , l_100)))
            { 
                uint64_t l_161 = 0xFFEA45A36F1CD0BFLL;
                l_161++;
            }
            else
            { 
                l_164[2][0][1]++;
            }
            g_64.f1.f2 = (safe_lshift_func_int16_t_s_u(p_27.f1.f1.f2, (!g_12)));
        }
    }
    l_179 = (safe_sub_func_int16_t_s_s((-1L), (l_178[1] |= ((safe_mod_func_int8_t_s_s((((l_122[1][0] = ((((l_122[0][0] != (((((g_21[1][1] != g_64.f1.f1.f2) <= l_103[3]) == 0x664DA32A0AA601C5LL) != 18446744073709551607UL) != 0L)) == g_64.f1.f4) > 0x733EL) > 0UL)) != 1L) && 0x70111016L), g_84)) ^ g_19))));
    return l_103[2];
}



static uint64_t  func_30(union U8  p_31)
{ 
    int8_t l_43 = 1L;
    int32_t l_44 = (-1L);
    int64_t l_63 = 0x19277EF9B05D12CBLL;
    int32_t l_78 = 0xACB2CDE8L;
    int64_t l_87 = 6L;
    int32_t l_88 = (-1L);
    g_17 = ((safe_lshift_func_uint8_t_u_u(g_12, (safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((l_43 &= (((g_21[3][0] || (+0x1CA0L)) > (safe_div_func_int32_t_s_s((0x405EF11EAE5249F3LL | 0x3BFA4ACF27260E96LL), g_15))) < g_17)), p_31.f0)) != g_15), l_44)))) && g_18[0][1]);
    for (g_20 = 0; (g_20 <= 1); g_20 += 1)
    { 
        const uint32_t l_62 = 2UL;
        int32_t l_81 = 0xC3162E15L;
        int32_t l_82[2][2][1] = {{{0x7F7B6152L},{0x37A3F171L}},{{0x7F7B6152L},{0x37A3F171L}}};
        int i, j, k;
        g_17 = (!p_31.f0);
        if (l_44)
            break;
        g_65[3] ^= (g_17 = (g_17 < ((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(g_20, ((safe_div_func_int32_t_s_s(p_31.f0, (g_7.f0--))) == (p_31.f0 | g_19)))) >= p_31.f0) <= l_44) && l_62), l_63)), p_31.f0)), l_43)) , g_64) , g_15) && p_31.f0) && g_17), 0L)), g_64.f1.f4)) >= g_21[1][1])));
        for (g_15 = 0; (g_15 <= 1); g_15 += 1)
        { 
            int32_t l_73 = 0xACE3E596L;
            int32_t l_80[2];
            uint64_t l_89 = 18446744073709551610UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_80[i] = 0x74066B75L;
            if (g_21[g_20][g_20])
                break;
            if (((l_44 ^= (safe_add_func_int32_t_s_s(0x6936EE37L, ((p_31.f0 , ((((safe_div_func_uint64_t_u_u((p_31.f0 < (safe_lshift_func_uint8_t_u_s(0UL, g_21[g_20][g_20]))), g_21[g_20][g_20])) & g_21[g_20][g_20]) && 1L) > 1UL)) & l_63)))) && l_63))
            { 
                int32_t l_72[3][5][5] = {{{0xF3C4E318L,0xF3C4E318L,0L,4L,0L},{(-1L),1L,0x4517DE86L,1L,(-1L)},{0L,4L,0L,0xF3C4E318L,0xF3C4E318L},{0x1FA067E3L,1L,0x1FA067E3L,(-8L),0x1FA067E3L},{0L,0xF3C4E318L,4L,4L,0xF3C4E318L}},{{(-1L),(-8L),0x4517DE86L,(-8L),(-1L)},{0xF3C4E318L,4L,4L,0xF3C4E318L,0L},{0x1FA067E3L,(-8L),0x1FA067E3L,1L,0x1FA067E3L},{0xF3C4E318L,0xF3C4E318L,0L,4L,0L},{(-1L),1L,0x4517DE86L,1L,(-1L)}},{{0L,4L,0L,0xF3C4E318L,0xF3C4E318L},{0x1FA067E3L,1L,0x1FA067E3L,(-8L),0x1FA067E3L},{0L,0xF3C4E318L,4L,4L,0xF3C4E318L},{(-1L),(-8L),0x4517DE86L,(-8L),(-1L)},{0xF3C4E318L,4L,4L,0xF3C4E318L,0L}}};
                int32_t l_74 = 0xBF6E6797L;
                int32_t l_75 = 1L;
                int32_t l_76 = (-3L);
                int32_t l_77 = 0x13D3DF28L;
                int32_t l_79 = 0xDD4F1ACCL;
                int i, j, k;
                --g_84;
                if (l_82[1][1][0])
                    break;
                l_89++;
            }
            else
            { 
                int8_t l_92 = (-7L);
                return l_92;
            }
        }
    }
    return g_21[1][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_21[i][j], "g_21[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1.f0, "g_64.f1.f0", print_hash_value);
    transparent_crc(g_64.f1.f1.f0, "g_64.f1.f1.f0", print_hash_value);
    transparent_crc(g_64.f1.f1.f1, "g_64.f1.f1.f1", print_hash_value);
    transparent_crc(g_64.f1.f1.f2, "g_64.f1.f1.f2", print_hash_value);
    transparent_crc(g_64.f1.f2, "g_64.f1.f2", print_hash_value);
    transparent_crc(g_64.f1.f3, "g_64.f1.f3", print_hash_value);
    transparent_crc(g_64.f1.f4, "g_64.f1.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);

    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_141[i][j].f0, "g_141[i][j].f0", print_hash_value);
            transparent_crc(g_141[i][j].f1, "g_141[i][j].f1", print_hash_value);
            transparent_crc(g_141[i][j].f2, "g_141[i][j].f2", print_hash_value);
            transparent_crc(g_141[i][j].f3, "g_141[i][j].f3", print_hash_value);
            transparent_crc(g_141[i][j].f4, "g_141[i][j].f4", print_hash_value);
            transparent_crc(g_141[i][j].f5, "g_141[i][j].f5", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_150[i].f0, "g_150[i].f0", print_hash_value);

    }
    transparent_crc(g_184.f0, "g_184.f0", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_259[i][j][k].f0.f0, "g_259[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_259[i][j][k].f0.f1, "g_259[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_259[i][j][k].f0.f2, "g_259[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_259[i][j][k].f0.f3, "g_259[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_259[i][j][k].f0.f4, "g_259[i][j][k].f0.f4", print_hash_value);
                transparent_crc(g_259[i][j][k].f0.f5, "g_259[i][j][k].f0.f5", print_hash_value);
                transparent_crc(g_259[i][j][k].f1, "g_259[i][j][k].f1", print_hash_value);
                transparent_crc(g_259[i][j][k].f2, "g_259[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_312.f0, "g_312.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
