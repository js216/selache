// SPDX-License-Identifier: MIT
// cctest_csmith_74c4dcec.c --- cctest case csmith_74c4dcec (csmith seed 1959058668)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x85891f15 */
/* @exp_ticks 0x3fb5 */

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

// Options:   -s 1959058668 -o /tmp/csmith_gen_pnk56a77/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
};

struct S1 {
   int64_t  f0;
   uint8_t  f1;
   int8_t  f2;
   const uint16_t  f3;
   uint32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   uint32_t  f1;
   const int8_t  f2;
   uint32_t  f3;
   int8_t  f4;
   struct S1  f5;
};
#pragma pack(pop)

union U3 {
   const struct S0  f0;
   uint8_t  f1;
};

union U4 {
   const int16_t  f0;
   int8_t  f1;
   uint8_t  f2;
   struct S0  f3;
};


static union U4 g_13 = {1L};
static int16_t g_16 = 0xF5AAL;
static struct S0 g_35[5] = {{1L},{1L},{1L},{1L},{1L}};
static int32_t g_43[3] = {(-1L),(-1L),(-1L)};
static int32_t g_44 = 0x66485393L;
static int16_t g_45[1] = {1L};
static int32_t g_47 = 0L;
static uint64_t g_68[4][2] = {{1UL,0x9415F90230FD1506LL},{0x9415F90230FD1506LL,1UL},{0x9415F90230FD1506LL,0x9415F90230FD1506LL},{1UL,0x9415F90230FD1506LL}};
static uint64_t g_72 = 0UL;
static struct S2 g_109 = {0x38A05123L,0UL,-1L,18446744073709551612UL,7L,{-1L,0x1AL,0x68L,0xBE09L,0x4B385D38L}};
static int32_t g_123 = 0x349C081AL;
static uint8_t g_124 = 255UL;
static uint16_t g_137 = 65535UL;
static uint8_t g_140 = 4UL;
static uint32_t g_151 = 6UL;
static const union U3 g_168[1][5][4] = {{{{{0x81E1L}},{{0xD3D9L}},{{0xD3D9L}},{{0x81E1L}}},{{{0x044EL}},{{0xD3D9L}},{{1L}},{{0xD3D9L}}},{{{0xD3D9L}},{{0x836AL}},{{1L}},{{1L}}},{{{0x044EL}},{{0x044EL}},{{0xD3D9L}},{{1L}}},{{{0x81E1L}},{{0x836AL}},{{0x81E1L}},{{0xD3D9L}}}}};
static uint64_t g_187 = 0UL;
static uint8_t g_200 = 0x1CL;



static int8_t  func_1(void);
static int64_t  func_2(int32_t  p_3, const int8_t  p_4, int8_t  p_5);
static struct S0  func_7(uint32_t  p_8, union U4  p_9, int32_t  p_10, int64_t  p_11);
static uint16_t  func_17(struct S2  p_18, uint32_t  p_19, int32_t  p_20);




static int8_t  func_1(void)
{ 
    uint16_t l_6 = 0xD193L;
    struct S0 l_231 = {0x5FEBL};
    l_231 = ((g_45[0] = ((func_2(l_6, l_6, l_6) <= g_109.f0) < g_109.f5.f2)) , g_35[3]);
    return l_231.f0;
}



static int64_t  func_2(int32_t  p_3, const int8_t  p_4, int8_t  p_5)
{ 
    int8_t l_12[3];
    uint64_t l_15 = 0x3718BD850270F9E3LL;
    struct S2 l_21 = {0UL,7UL,1L,1UL,0x9FL,{4L,0x85L,1L,0UL,0UL}};
    int32_t l_46 = 0x45490A9DL;
    struct S0 l_146 = {1L};
    int32_t l_163 = 1L;
    int i;
    for (i = 0; i < 3; i++)
        l_12[i] = 0x08L;
    if (((((l_146 = func_7(l_12[0], g_13, (((safe_unary_minus_func_uint16_t_u((g_47 &= (l_46 = ((g_16 = l_15) , ((func_17(l_21, p_4, g_13.f1) , l_21.f5.f1) <= l_21.f5.f2)))))) >= 18446744073709551615UL) >= 0xD7B9758AC42121A6LL), l_21.f2)) , 3UL) && 4L) != p_3))
    { 
        int16_t l_162 = (-2L);
        uint8_t l_174 = 246UL;
        struct S0 l_175 = {0L};
        l_163 ^= (safe_div_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_s(g_151, 4)) <= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(g_43[1], p_3)), 4)), (safe_add_func_uint16_t_u_u((l_46 = (safe_div_func_int16_t_s_s(p_4, 1L))), 65533UL))))) < l_162), l_162));
        l_174 &= (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((l_21.f5 , (g_168[0][3][1] , ((safe_rshift_func_int16_t_s_s((((((((((safe_add_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u(l_162)) > p_3), 1UL)) <= p_3) <= l_21.f5.f1) , l_21.f2) | l_162) || g_16) > 251UL) , 0x6CA5L) | p_5), 12)) , l_15))), p_3)) , p_3), 1));
        l_175 = l_175;
    }
    else
    { 
        uint8_t l_176[2][1][2] = {{{0x5FL,0x5FL}},{{0x5FL,0x5FL}}};
        union U4 l_185[4] = {{0x44F5L},{0x44F5L},{0x44F5L},{0x44F5L}};
        int32_t l_198[5][4][2] = {{{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)}},{{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)}},{{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)}},{{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)}},{{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)},{0x4CF3F2C5L,(-1L)}}};
        int i, j, k;
        for (l_146.f0 = 4; (l_146.f0 >= 0); l_146.f0 -= 1)
        { 
            if (g_13.f2)
                break;
        }
        if (((((g_35[3].f0 == l_176[1][0][0]) , g_109.f5) , (l_146.f0 ^ g_72)) | 65529UL))
        { 
            uint64_t l_186[4] = {0x21B87BBF4A9A9FA4LL,0x21B87BBF4A9A9FA4LL,0x21B87BBF4A9A9FA4LL,0x21B87BBF4A9A9FA4LL};
            int i;
            g_187 &= (g_140 && (safe_sub_func_int8_t_s_s(l_176[1][0][1], (safe_add_func_uint16_t_u_u((func_7((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s((g_109.f0 || (g_109.f5.f0 = ((l_21.f5.f3 , g_68[0][1]) | l_176[1][0][1]))), p_4)) | p_3), 15)), l_185[1], p_5, l_186[2]) , g_123), l_176[1][0][1])))));
        }
        else
        { 
            int16_t l_190 = (-1L);
            int32_t l_193 = 0x39EE50CDL;
            struct S0 l_203[4][4] = {{{0xBBC1L},{0x73FAL},{0x73FAL},{0xBBC1L}},{{0x73FAL},{0xBBC1L},{0x73FAL},{0x73FAL}},{{0xBBC1L},{0xBBC1L},{0L},{0xBBC1L}},{{0xBBC1L},{0x73FAL},{0x73FAL},{0xBBC1L}}};
            uint64_t l_205[4][3];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                    l_205[i][j] = 0x0A8395A487C2631FLL;
            }
            l_193 = (((safe_rshift_func_int16_t_s_s((p_4 | l_190), (safe_sub_func_int8_t_s_s((-7L), (g_43[1] & p_4))))) > g_68[1][0]) | l_190);
            if ((safe_div_func_int16_t_s_s(((0xE0FF88FCL && (l_163 = (0xF4834D8CA7F0EEFALL > (g_168[0][3][1].f0.f0 & p_4)))) && p_4), p_5)))
            { 
                int32_t l_196 = 0xD848E669L;
                int32_t l_197[2];
                int32_t l_199 = 0xC3F2B265L;
                int i;
                for (i = 0; i < 2; i++)
                    l_197[i] = (-1L);
                g_200++;
                l_146 = g_35[4];
            }
            else
            { 
                struct S0 l_204 = {1L};
                int32_t l_208[5][3][1] = {{{0x69658B35L},{0x70CC6506L},{0x69658B35L}},{{0x70CC6506L},{0x69658B35L},{0x70CC6506L}},{{0x69658B35L},{0x70CC6506L},{0x69658B35L}},{{0x70CC6506L},{0x69658B35L},{0x70CC6506L}},{{0x69658B35L},{0x70CC6506L},{0x69658B35L}}};
                int i, j, k;
                l_146 = (l_204 = l_203[2][1]);
                --l_205[1][1];
                l_208[4][2][0] &= (g_47 = p_4);
            }
            for (l_21.f4 = 1; (l_21.f4 >= 0); l_21.f4 -= 1)
            { 
                int32_t l_213[5][2][1] = {{{1L},{0L}},{{1L},{0L}},{{1L},{0L}},{{1L},{0L}},{{1L},{0L}}};
                uint32_t l_214 = 0x43D3E714L;
                int i, j, k;
                g_123 = (((l_198[1][0][0] > (g_109.f5.f0 |= 0xB596F503D3159323LL)) || (-8L)) == (g_109.f4 = (safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_187, 0UL)) ^ 0x8C4D48E7L), g_43[2]))));
                ++l_214;
                l_185[1].f3 = g_168[0][3][1].f0;
            }
        }
    }
    for (g_123 = 0; (g_123 >= 0); g_123 -= 1)
    { 
        for (g_109.f3 = 0; (g_109.f3 <= 0); g_109.f3 += 1)
        { 
            for (l_46 = 0; (l_46 <= 2); l_46 += 1)
            { 
                int i;
                l_163 = (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((g_43[l_46] | ((g_43[(g_109.f3 + 2)] || (!((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(65535UL, ((+(safe_mod_func_uint8_t_u_u(g_43[(g_109.f3 + 2)], l_12[(g_109.f3 + 1)]))) || 0x653DA89D31CD22D5LL))), 0)) != 0x71BD32C4L))) > 0x2238FF03L)), 3)) ^ 0x1CL), l_12[(g_123 + 1)]));
            }
            l_146 = l_146;
        }
    }
    g_35[3] = g_168[0][3][1].f0;
    return p_3;
}



static struct S0  func_7(uint32_t  p_8, union U4  p_9, int32_t  p_10, int64_t  p_11)
{ 
    int32_t l_50 = 2L;
    int32_t l_53 = 0x96A48ADBL;
    struct S0 l_54 = {0xFC64L};
    union U4 l_81[4][2][5] = {{{{-1L},{-1L},{6L},{0x4893L},{0x4893L}},{{0x81B6L},{-2L},{0x81B6L},{1L},{-2L}}},{{{0x4893L},{0xCED9L},{0x926FL},{0x4893L},{0x926FL}},{{-1L},{-1L},{0L},{-2L},{0xDC12L}}},{{{-1L},{-1L},{0x926FL},{0x926FL},{-1L}},{{0xDC12L},{0x7691L},{0x81B6L},{0xDC12L},{1L}}},{{{-1L},{-1L},{6L},{-1L},{-1L}},{{0x81B6L},{-1L},{0x7691L},{1L},{-1L}}}};
    int64_t l_83 = 1L;
    union U3 l_121 = {{0L}};
    int i, j, k;
    if (((safe_mul_func_int8_t_s_s(p_11, ((l_50 = (-1L)) | (safe_lshift_func_int8_t_s_s((0x41179D740F48B4F1LL >= (g_35[1] , l_53)), 1))))) , 0x2F19166CL))
    { 
        return l_54;
    }
    else
    { 
        int16_t l_59 = 0x41AEL;
        int32_t l_62 = 0L;
        int32_t l_70 = 0x79D87571L;
        int32_t l_71 = 1L;
        struct S0 l_94[5] = {{0L},{0L},{0L},{0L},{0L}};
        int8_t l_103 = 0x99L;
        uint64_t l_104[3][5] = {{18446744073709551615UL,0UL,0xD813A62BBE412C47LL,0xD813A62BBE412C47LL,0UL},{18446744073709551615UL,0UL,0xD813A62BBE412C47LL,0xD813A62BBE412C47LL,0UL},{18446744073709551615UL,0UL,0xD813A62BBE412C47LL,0xD813A62BBE412C47LL,0UL}};
        int i, j;
        if ((18446744073709551615UL >= (safe_rshift_func_uint8_t_u_u(l_53, (safe_sub_func_int16_t_s_s(l_59, p_9.f1))))))
        { 
            struct S2 l_67 = {18446744073709551615UL,1UL,-1L,0UL,1L,{-3L,0x29L,1L,7UL,0x0F8796DEL}};
            int32_t l_69[4] = {0xF3D54CDCL,0xF3D54CDCL,0xF3D54CDCL,0xF3D54CDCL};
            int i;
            if ((safe_mul_func_int16_t_s_s(g_47, ((g_68[1][1] = ((l_62 = l_53) == (safe_mod_func_int16_t_s_s(((((g_35[3].f0 ^ (safe_lshift_func_uint16_t_u_u(((l_67 , g_43[1]) & l_59), l_59))) || l_59) <= l_59) && 18446744073709551609UL), l_67.f5.f2)))) > g_43[1]))))
            { 
                int16_t l_77 = 0xE53DL;
                struct S1 l_80 = {0x05BA9186717EFFEBLL,0xB2L,0L,0x0359L,18446744073709551612UL};
                g_72++;
                p_10 = ((!(+((l_53 ^= l_77) | ((safe_rshift_func_uint8_t_u_s((((l_80 , l_81[3][0][0]) , (!l_80.f1)) , p_9.f0), 5)) < p_9.f2)))) & l_70);
                return g_35[0];
            }
            else
            { 
                uint8_t l_89[4][2][3] = {{{0xC0L,0xFCL,0xFCL},{9UL,0UL,0UL}},{{0xC0L,0xFCL,0xFCL},{9UL,0UL,0UL}},{{0xC0L,0xFCL,0xFCL},{9UL,0UL,0UL}},{{0xC0L,0xFCL,0xFCL},{9UL,0UL,0UL}}};
                int i, j, k;
                l_83 = g_45[0];
                l_71 ^= ((safe_rshift_func_int16_t_s_s(((((p_9.f2 <= l_59) | ((safe_mod_func_int8_t_s_s(p_9.f2, 6L)) <= 0L)) || l_62) , l_50), g_44)) , 0L);
                g_47 = (l_54.f0 == ((((~(l_59 > l_89[1][1][0])) > ((safe_mul_func_int8_t_s_s((((g_68[1][1] == l_89[1][1][1]) != p_9.f1) && l_54.f0), g_45[0])) , g_35[3].f0)) | l_89[3][1][2]) < g_43[1]));
            }
            for (l_67.f5.f2 = (-18); (l_67.f5.f2 != 7); l_67.f5.f2++)
            { 
                uint8_t l_112 = 0xF5L;
                g_35[2] = l_94[2];
                l_104[1][1] &= ((p_9.f2 >= (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((l_71 = l_81[3][0][0].f2), l_103)), l_59)) | l_50), p_8)), g_45[0]))) != 0UL);
                g_47 = ((0x72896A24D72531C4LL & 2UL) , (((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((((g_109 , (safe_mul_func_int8_t_s_s(((l_112 = 0x6E12AA013F98BF10LL) != p_9.f2), g_109.f2))) > l_83) == g_45[0]), g_45[0])) ^ 1UL), 2)) != 0xB245L) <= 0x93L));
            }
            l_71 = l_50;
        }
        else
        { 
            int32_t l_115[1];
            int32_t l_145 = 8L;
            int i;
            for (i = 0; i < 1; i++)
                l_115[i] = 0xF5BBDA66L;
            for (l_83 = (-16); (l_83 > 19); l_83 = safe_add_func_int64_t_s_s(l_83, 4))
            { 
                l_115[0] = 0L;
                l_53 = (g_13.f1 , g_109.f5.f0);
                p_10 = (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((p_11 , 0x455E0D3EL) >= 1L), (g_13.f1 ^= ((!((l_121 , p_9.f0) && l_115[0])) , (-9L))))), (-2L)));
            }
            for (g_44 = 2; (g_44 >= 0); g_44 -= 1)
            { 
                int32_t l_122 = (-2L);
                int i;
                --g_124;
                g_35[g_44] = g_35[3];
                l_53 = g_109.f5.f0;
            }
            l_145 ^= (((((4UL == ((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((g_123 ^= (safe_rshift_func_uint16_t_u_s(((l_71 ^= (((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((g_140 = (g_137--)) & (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_109.f2, ((l_83 != l_94[2].f0) < g_68[1][1]))), g_43[0]))), 18446744073709551606UL)), l_53)) <= l_115[0]) , g_140)) < 0L), 2))) , l_115[0]) , l_104[2][1]), 3L)), p_9.f1)) , g_109.f5.f4)) == 0x9883E6589940662CLL) ^ g_13.f1) && p_8) > (-1L));
        }
    }
    return l_121.f0;
}



static uint16_t  func_17(struct S2  p_18, uint32_t  p_19, int32_t  p_20)
{ 
    uint32_t l_39[5][1];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_39[i][j] = 0xECBC59A6L;
    }
    for (p_18.f3 = 0; (p_18.f3 == 42); ++p_18.f3)
    { 
        uint32_t l_26 = 0xDCC3592EL;
        for (p_18.f0 = (-2); (p_18.f0 < 21); p_18.f0 = safe_add_func_int32_t_s_s(p_18.f0, 7))
        { 
            uint32_t l_33 = 0x8169B2B2L;
            struct S0 l_34 = {1L};
            int8_t l_42 = (-1L);
            g_35[3] = ((l_26 , (((safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_26, ((l_26 && ((0xCE01153AL < 0x97756EB3L) & l_26)) && p_18.f2))), 0x46E972F3L)) | 0xB602708CDB5CF635LL), 255UL)) < 6L) || l_33)) , l_34);
            if ((((safe_mod_func_uint8_t_u_u(g_13.f2, (p_18.f5.f1 = l_34.f0))) <= (!((g_13.f2 ^ l_26) ^ l_39[1][0]))) > p_18.f5.f2))
            { 
                g_45[0] |= ((safe_rshift_func_uint16_t_u_s(l_39[2][0], 5)) >= (g_44 = ((p_18.f2 , (l_42 || (g_43[1] |= 0xA01DC0BFL))) == p_18.f5.f3)));
            }
            else
            { 
                return g_16;
            }
            if (p_18.f5.f1)
                break;
        }
        if (g_44)
            break;
    }
    return l_39[1][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_35[i].f0, "g_35[i].f0", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);

    }
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_45[i], "g_45[i]", print_hash_value);

    }
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_109.f5.f0, "g_109.f5.f0", print_hash_value);
    transparent_crc(g_109.f5.f1, "g_109.f5.f1", print_hash_value);
    transparent_crc(g_109.f5.f2, "g_109.f5.f2", print_hash_value);
    transparent_crc(g_109.f5.f3, "g_109.f5.f3", print_hash_value);
    transparent_crc(g_109.f5.f4, "g_109.f5.f4", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_168[i][j][k].f0.f0, "g_168[i][j][k].f0.f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
