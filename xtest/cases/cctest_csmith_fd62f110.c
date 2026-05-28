// SPDX-License-Identifier: MIT
// cctest_csmith_fd62f110.c --- cctest case csmith_fd62f110 (csmith seed 4251119888)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdc98a233 */
/* @exp_ticks 0x19f92 */

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

// Options:   -s 4251119888 -o /tmp/csmith_gen_qc9xw8xo/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
};

union U1 {
   const struct S0  f0;
   uint64_t  f1;
   const int16_t  f2;
};

union U2 {
   struct S0  f0;
   uint32_t  f1;
};

union U3 {
   int32_t  f0;
   const int16_t  f1;
   uint16_t  f2;
   uint8_t  f3;
   const int16_t  f4;
};

union U4 {
   uint64_t  f0;
   int32_t  f1;
};


static union U2 g_10 = {{0xD069F498L}};
static union U2 *g_9 = &g_10;
static int64_t g_39 = 0x31966C4779D44F4CLL;
static int8_t g_40[3][2][7] = {{{0x65L,0x08L,(-7L),0x08L,0x65L,1L,(-2L)},{0xC1L,0L,(-7L),0x95L,0x08L,0L,0x63L}},{{0x95L,(-10L),1L,0L,0L,1L,(-10L)},{0xC1L,0x95L,0L,(-2L),7L,1L,1L}},{{0x65L,1L,0xB4L,(-7L),0x71L,0L,0x71L},{(-2L),0x71L,0x71L,(-2L),3L,1L,(-7L)}}};
static int32_t g_43 = 0x1EBC5F93L;
static int16_t g_45 = 1L;
static int8_t g_46 = 1L;
static uint32_t g_47 = 2UL;
static uint16_t g_55 = 0xF399L;
static struct S0 g_58 = {0L};
static struct S0 g_60 = {0x4E0BBE0EL};
static uint8_t g_95 = 0UL;
static int16_t g_98 = 0xC5A1L;
static int32_t g_99 = 6L;
static uint32_t g_102[4] = {0xFCC30D4DL,0xFCC30D4DL,0xFCC30D4DL,0xFCC30D4DL};
static union U3 g_106 = {0x6DA29A6AL};
static union U3 g_108 = {3L};
static int64_t g_133 = 0x428794F9328A2DDDLL;
static uint16_t g_152 = 0UL;
static int32_t g_153 = 1L;
static uint16_t g_156 = 0x020BL;
static int64_t *g_160 = &g_39;
static int64_t **g_159[3][2][3] = {{{&g_160,&g_160,(void*)0},{&g_160,&g_160,(void*)0}},{{&g_160,&g_160,(void*)0},{&g_160,&g_160,(void*)0}},{{&g_160,&g_160,(void*)0},{&g_160,&g_160,(void*)0}}};
static uint64_t g_181 = 0x9F120E9FE6B08A47LL;
static uint32_t g_184[4][6][6] = {{{4UL,0xB1093934L,0x56DCA7D6L,18446744073709551615UL,0xFB260FA4L,0x5512477AL},{0x56DCA7D6L,0x843AEAE0L,18446744073709551615UL,1UL,18446744073709551615UL,0x843AEAE0L},{0x15A3005FL,18446744073709551615UL,4UL,5UL,0x5512477AL,18446744073709551615UL},{18446744073709551615UL,0xB4AE9B51L,18446744073709551615UL,1UL,6UL,0x27ADE135L},{0xC41F251FL,0xB4AE9B51L,0x762AE1A4L,0x00DBD57FL,0x5512477AL,1UL},{0xF4545E75L,18446744073709551615UL,1UL,6UL,18446744073709551615UL,0UL}},{{18446744073709551615UL,0x843AEAE0L,0xFE06259CL,1UL,0xFB260FA4L,18446744073709551615UL},{5UL,0xB1093934L,0x843AEAE0L,18446744073709551615UL,4UL,0x5ABE805CL},{0xFE06259CL,0x5ABE805CL,1UL,0xF4545E75L,18446744073709551615UL,18446744073709551615UL},{0x7B090339L,1UL,0xDE9C46E9L,0xDE9C46E9L,1UL,0x7B090339L},{18446744073709551615UL,0x5512477AL,18446744073709551615UL,0x843AEAE0L,18446744073709551613UL,0x00DBD57FL},{18446744073709551615UL,0xDE9C46E9L,0x5ABE805CL,2UL,1UL,0UL}},{{18446744073709551615UL,0x7B090339L,2UL,0x843AEAE0L,0xC41F251FL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL,5UL,0xDE9C46E9L,0xB4AE9B51L,0xB1093934L},{0x7B090339L,0x726C3776L,0xC41F251FL,0xF4545E75L,18446744073709551615UL,18446744073709551615UL},{0xFE06259CL,0UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,6UL},{5UL,0x15A3005FL,0xB1093934L,1UL,1UL,0x56DCA7D6L},{18446744073709551615UL,6UL,0x00DBD57FL,6UL,18446744073709551615UL,0xFE06259CL}},{{0xF4545E75L,1UL,1UL,0x00DBD57FL,0xFE06259CL,0x5600962FL},{0xC41F251FL,2UL,0xFB260FA4L,1UL,0x15A3005FL,0x5600962FL},{18446744073709551615UL,18446744073709551615UL,1UL,5UL,18446744073709551615UL,0xFE06259CL},{0x15A3005FL,18446744073709551615UL,0x00DBD57FL,1UL,18446744073709551611UL,0x56DCA7D6L},{0x56DCA7D6L,0xB9EE8E04L,0xB1093934L,18446744073709551615UL,5UL,6UL},{4UL,1UL,18446744073709551615UL,0xBB7FEAD5L,18446744073709551608UL,18446744073709551615UL}}};
static int32_t g_185 = (-1L);
static union U3 g_202[2] = {{0xF2295907L},{0xF2295907L}};
static uint32_t g_204 = 1UL;
static int32_t **g_208 = (void*)0;
static int32_t ***g_207[7][1] = {{&g_208},{&g_208},{&g_208},{&g_208},{&g_208},{&g_208},{&g_208}};
static struct S0 g_226 = {0x4349FD6DL};
static int32_t g_241 = 0xAD6DF752L;
static union U3 *g_283[6][2] = {{&g_202[1],&g_202[1]},{&g_202[1],&g_202[1]},{&g_202[1],&g_202[1]},{&g_202[1],&g_202[1]},{&g_202[1],&g_202[1]},{&g_202[1],&g_202[1]}};
static union U3 **g_282[2] = {&g_283[4][1],&g_283[4][1]};
static union U4 g_335 = {1UL};
static union U4 *g_338 = &g_335;
static uint16_t g_360 = 0x61A3L;
static union U1 g_403 = {{0xFB30E97AL}};
static int32_t g_535 = 0xE9BFD41EL;
static int32_t g_596 = 1L;
static int16_t g_646 = (-8L);
static union U3 ***g_798 = (void*)0;
static union U3 ****g_797[1] = {&g_798};
static uint64_t g_842 = 18446744073709551610UL;
static uint32_t g_858 = 0x9AA28F3CL;
static const int32_t g_866 = (-4L);
static uint64_t * const **g_1015 = (void*)0;
static const uint32_t g_1019 = 1UL;
static const uint32_t *g_1018 = &g_1019;
static uint64_t *g_1025 = &g_181;
static uint64_t **g_1024 = &g_1025;
static uint64_t ***g_1023 = &g_1024;
static uint16_t g_1065[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static int32_t *g_1138 = &g_226.f0;
static int32_t **g_1137 = &g_1138;
static union U2 *g_1144 = &g_10;
static int32_t ****g_1159 = &g_207[5][0];
static int32_t **** const *g_1158 = &g_1159;
static uint16_t g_1203 = 1UL;
static int8_t *g_1282 = &g_40[2][0][0];
static struct S0 *g_1331 = (void*)0;
static struct S0 **g_1330 = &g_1331;
static struct S0 ***g_1329 = &g_1330;
static int32_t g_1348 = 0x77AF5CA5L;
static union U3 g_1357[7][4] = {{{0xA4F3DD0EL},{0xA5A07A0CL},{0x08831AF1L},{0xA4F3DD0EL}},{{3L},{-10L},{3L},{0x08831AF1L}},{{0x1FBAC7F1L},{-10L},{0L},{0xA4F3DD0EL}},{{-10L},{0xA5A07A0CL},{0xA5A07A0CL},{-10L}},{{3L},{0xA4F3DD0EL},{0xA5A07A0CL},{0x08831AF1L}},{{-10L},{0x1FBAC7F1L},{0L},{0x1FBAC7F1L}},{{0x1FBAC7F1L},{0xA5A07A0CL},{3L},{0x1FBAC7F1L}}};
static union U2 **g_1512 = (void*)0;
static union U2 ***g_1511 = &g_1512;
static union U2 ****g_1510[5] = {&g_1511,&g_1511,&g_1511,&g_1511,&g_1511};
static int32_t g_1547[2][2][1] = {{{(-7L)},{(-7L)}},{{(-7L)},{(-7L)}}};
static int8_t g_1549 = 0x3DL;
static int8_t g_1552[3][1] = {{3L},{3L},{3L}};
static int32_t g_1567 = (-1L);
static int8_t g_1582 = 3L;
static uint32_t *g_1618 = &g_204;
static uint32_t **g_1617 = &g_1618;
static uint16_t g_1664 = 0UL;
static union U4 g_1726[4] = {{0UL},{0UL},{0UL},{0UL}};
static const uint64_t g_1777 = 0UL;
static const uint64_t *g_1778 = (void*)0;
static int32_t g_1792[6][2][5] = {{{6L,(-1L),0xA8C9D55DL,7L,7L},{(-1L),6L,(-1L),0xA8C9D55DL,7L}},{{0xB74DC4B2L,0x8FF9AD00L,7L,0x8FF9AD00L,0xB74DC4B2L},{(-1L),0x8FF9AD00L,6L,0xB74DC4B2L,6L}},{{6L,6L,7L,0xB74DC4B2L,(-9L)},{0x8FF9AD00L,(-1L),(-1L),0x8FF9AD00L,6L}},{{0x8FF9AD00L,0xB74DC4B2L,0xA8C9D55DL,0xA8C9D55DL,0xB74DC4B2L},{6L,(-1L),0xA8C9D55DL,7L,7L}},{{(-1L),6L,(-1L),0xA8C9D55DL,7L},{0xB74DC4B2L,0x8FF9AD00L,7L,0x8FF9AD00L,0xB74DC4B2L}},{{(-1L),0x8FF9AD00L,6L,0xB74DC4B2L,6L},{6L,6L,7L,0xB74DC4B2L,(-9L)}}};
static uint8_t *g_1841[1] = {&g_108.f3};
static uint8_t **g_1840 = &g_1841[0];
static int32_t ****g_1860 = &g_207[6][0];
static union U2 *g_1867 = (void*)0;
static union U1 g_1870 = {{0xA4F1A15DL}};
static const uint8_t g_1903 = 0xF8L;
static uint16_t *g_1984 = &g_1065[1];
static uint16_t **g_1983 = &g_1984;
static uint32_t g_2055 = 0xA2ABCF02L;
static uint8_t g_2062 = 252UL;
static int8_t g_2094 = 0xA2L;
static uint32_t ***g_2099 = &g_1617;
static uint32_t ****g_2098[1] = {&g_2099};
static int32_t *g_2177[3] = {&g_1547[0][0][0],&g_1547[0][0][0],&g_1547[0][0][0]};
static const union U2 g_2235 = {{0x5C7163CAL}};
static const union U2 *g_2234[4] = {&g_2235,&g_2235,&g_2235,&g_2235};



static uint32_t  func_1(void);
static union U2 * func_2(int32_t  p_3);
static int32_t  func_4(uint32_t  p_5, union U2 * p_6, const union U2 * p_7);
static union U2 * func_11(union U2 * const  p_12, union U2 * p_13, union U1  p_14, union U3  p_15, int64_t  p_16);
static union U2 * func_17(int32_t  p_18, int16_t  p_19, union U2 * p_20, union U2 * p_21);
static int16_t  func_24(struct S0  p_25, uint32_t  p_26, uint64_t  p_27, uint16_t  p_28);
static struct S0  func_29(union U2 * p_30, union U1  p_31, union U2 * p_32, union U2  p_33, union U2 * p_34);
static union U2 * func_35(struct S0  p_36);




static uint32_t  func_1(void)
{ 
    int32_t l_8 = 0xFBBD0A70L;
    int64_t *l_38 = &g_39;
    struct S0 l_41[3] = {{0x5835A7ABL},{0x5835A7ABL},{0x5835A7ABL}};
    union U1 l_50 = {{0x90F6DAE1L}};
    union U2 *l_684[4] = {&g_10,&g_10,&g_10,&g_10};
    union U3 l_1871 = {0L};
    const union U2 **l_2232 = (void*)0;
    const union U2 **l_2233 = (void*)0;
    union U2 **l_2243 = (void*)0;
    union U2 **l_2244[4];
    union U2 *l_2245 = &g_10;
    uint8_t ***l_2250 = &g_1840;
    const union U3 l_2255 = {0x24EF59ADL};
    uint32_t l_2256 = 0xCE0119A8L;
    int32_t *l_2257 = (void*)0;
    int i;
    for (i = 0; i < 4; i++)
        l_2244[i] = &l_684[3];
    l_2245 = func_2(func_4(l_8, g_9, (g_2234[1] = func_11(&g_10, func_17((safe_lshift_func_int8_t_s_s((g_10.f0.f0 >= g_10.f0.f0), 5)), func_24(func_29(func_35(((g_40[1][1][6] = ((*l_38) = (safe_unary_minus_func_uint8_t_u(g_10.f0.f0)))) , l_41[1])), l_50, &g_10, (*g_9), &g_10), g_184[3][2][3], l_50.f0.f0, l_41[1].f0), l_684[2], l_684[2]), g_1870, l_1871, l_1871.f1))));
    l_8 ^= (((((((safe_div_func_int8_t_s_s((g_1726[3].f1 && ((safe_sub_func_uint8_t_u_u((l_2250 == &g_1840), ((l_41[0] , ((safe_sub_func_uint8_t_u_u(((l_1871.f0 > (safe_mod_func_uint64_t_u_u(((l_2255 , (void*)0) == &g_1024), 1UL))) , 2UL), l_1871.f4)) , (*g_160))) | (*g_160)))) , l_2255.f0)), (*g_1282))) > l_2255.f1) ^ l_1871.f0) , 8L) >= (***g_2099)) >= 0x720A73D2B0BF173BLL) == l_2256);
    return g_1547[1][0][0];
}



static union U2 * func_2(int32_t  p_3)
{ 
    int32_t *l_2241 = (void*)0;
    union U2 *l_2242 = &g_10;
    l_2241 = l_2241;
    return l_2242;
}



static int32_t  func_4(uint32_t  p_5, union U2 * p_6, const union U2 * p_7)
{ 
    uint8_t l_2238 = 249UL;
    int32_t l_2240 = (-8L);
    for (g_1567 = (-4); (g_1567 > (-24)); g_1567 = safe_sub_func_int16_t_s_s(g_1567, 8))
    { 
        uint16_t l_2239 = 0x9FC3L;
        l_2239 = l_2238;
    }
    l_2240 = l_2238;
    return l_2240;
}



static union U2 * func_11(union U2 * const  p_12, union U2 * p_13, union U1  p_14, union U3  p_15, int64_t  p_16)
{ 
    int32_t l_1874[6][4][2] = {{{0x8809D8ECL,0xFAE88FCDL},{(-1L),0x3412B84FL},{0L,1L},{0x2B604937L,0x666A3708L}},{{(-1L),0x666A3708L},{0x2B604937L,1L},{0L,0x3412B84FL},{(-1L),0xFAE88FCDL}},{{0x8809D8ECL,0x8809D8ECL},{1L,0L},{1L,(-1L)},{(-1L),0x1F68A5C4L}},{{0L,(-1L)},{0xC15F5FC9L,0x5B2A5401L},{0xC15F5FC9L,(-1L)},{0L,0x1F68A5C4L}},{{(-1L),(-1L)},{1L,0L},{1L,0x8809D8ECL},{0x8809D8ECL,0xFAE88FCDL}},{{(-1L),0x3412B84FL},{0L,1L},{0x2B604937L,0x666A3708L},{(-1L),0x666A3708L}}};
    uint16_t l_1891 = 1UL;
    int32_t l_1894 = (-1L);
    int32_t l_1895 = 0x521ED091L;
    uint8_t ***l_1904[4][4];
    int32_t l_1927 = 0x298990EFL;
    int32_t l_1928 = 0xDD563512L;
    int32_t l_1929 = 0x299FDE36L;
    int8_t l_1930 = 0xF7L;
    int32_t l_1931[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_1932 = 0L;
    uint64_t l_1936 = 0x06CBD66F698D551BLL;
    union U2 **l_1995 = &g_1144;
    uint64_t ***l_2008[1][3];
    uint32_t l_2046 = 1UL;
    uint16_t **l_2076 = &g_1984;
    struct S0 **** const l_2110 = &g_1329;
    int64_t l_2120 = 0x7EAFF46F3B0CD7C5LL;
    int16_t l_2122[3][7][4] = {{{0x2365L,0L,0x2365L,(-1L)},{(-1L),(-7L),(-1L),(-1L)},{0L,0L,6L,(-7L)},{(-7L),0x2365L,0L,0x2365L},{0xB9F5L,(-7L),6L,0L},{0x2365L,(-7L),(-7L),0x2365L},{(-7L),0x2365L,0xB9F5L,(-1L)}},{{(-7L),0xB9F5L,(-7L),6L},{0x2365L,(-1L),6L,6L},{0xB9F5L,0xB9F5L,0L,(-1L)},{(-1L),0x2365L,0L,0x2365L},{0xB9F5L,(-7L),6L,0L},{0x2365L,(-7L),(-7L),0x2365L},{(-7L),0x2365L,0xB9F5L,(-1L)}},{{(-7L),0xB9F5L,(-7L),6L},{0x2365L,(-1L),6L,6L},{0xB9F5L,0xB9F5L,0L,(-1L)},{(-1L),0x2365L,0L,0x2365L},{0xB9F5L,(-7L),6L,0L},{0x2365L,(-7L),(-7L),0x2365L},{(-7L),0x2365L,0xB9F5L,(-1L)}}};
    int32_t *l_2129 = &l_1931[1];
    struct S0 *l_2130 = &g_60;
    uint64_t l_2231 = 1UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_1904[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_2008[i][j] = &g_1024;
    }
    if ((safe_mul_func_int16_t_s_s((-1L), ((p_15.f3 <= 0L) != ((**g_1840) <= 0UL)))))
    { 
        int64_t l_1875 = 1L;
        uint32_t ***l_1885 = &g_1617;
        uint32_t ****l_1884 = &l_1885;
        uint64_t **l_1886 = &g_1025;
        int32_t l_1890[4][2][3] = {{{0x9348354EL,2L,2L},{0xA5E7E1E0L,(-1L),0x08A15441L}},{{(-9L),(-1L),(-1L)},{(-9L),(-1L),0x9348354EL}},{{0xA5E7E1E0L,0xBCE39ED6L,0xA5E7E1E0L},{0x9348354EL,(-1L),(-9L)}},{{(-1L),(-1L),(-9L)},{0x08A15441L,(-1L),0xA5E7E1E0L}}};
        union U2 *l_1961 = &g_10;
        struct S0 l_1965 = {-1L};
        uint16_t **l_1982 = (void*)0;
        int32_t *l_1985 = &l_1890[1][0][0];
        uint8_t l_1996 = 251UL;
        union U1 l_2002[1] = {{{0x4314C635L}}};
        int32_t l_2048[6][6][3];
        int32_t l_2049[7][3][7] = {{{0L,0xC3684621L,0x996E8411L,0xC3684621L,0L,0x89E67D68L,0x996E8411L},{0xC4503E72L,0x31FFDAF4L,0x3E6DEBB0L,0x3E6DEBB0L,0x31FFDAF4L,0xC4503E72L,0L},{(-2L),0x0D35BDE0L,(-8L),0x89E67D68L,(-8L),0x0D35BDE0L,(-2L)}},{{0xC4503E72L,0x3E6DEBB0L,0L,0L,0L,0L,0x3E6DEBB0L},{0L,0x0D35BDE0L,0xDCCF2806L,0xF16A8351L,0L,0xF16A8351L,0xDCCF2806L},{0L,0x31FFDAF4L,0L,0L,0xC4503E72L,0xC4503E72L,0L}},{{(-8L),0xC3684621L,(-8L),0xF16A8351L,(-2L),0xC3684621L,(-2L)},{0x31FFDAF4L,0L,0x3E6DEBB0L,0L,0xC4503E72L,0L,0L},{0L,0x89E67D68L,0x996E8411L,0x89E67D68L,0L,0xC3684621L,0x996E8411L}},{{0xC6EB34B6L,0x31FFDAF4L,0L,0x3E6DEBB0L,0L,0xC4503E72L,0L},{(-2L),0xF16A8351L,(-8L),0xC3684621L,(-8L),0xF16A8351L,(-2L)},{0xC6EB34B6L,0x3E6DEBB0L,0L,0L,0x31FFDAF4L,0L,0L}},{{0L,0xF16A8351L,0xDCCF2806L,0x0D35BDE0L,0L,0x0D35BDE0L,0xDCCF2806L},{0x31FFDAF4L,0x31FFDAF4L,0L,0L,0xC6EB34B6L,0xC4503E72L,0x3E6DEBB0L},{(-8L),0x89E67D68L,(-8L),0x0D35BDE0L,(-2L),0x89E67D68L,(-2L)}},{{0L,0L,0L,0L,0xC6EB34B6L,0L,0L},{0L,0xC3684621L,0x996E8411L,0xC3684621L,0L,0x89E67D68L,0x996E8411L},{0xC4503E72L,0x31FFDAF4L,0x3E6DEBB0L,0x3E6DEBB0L,0x31FFDAF4L,0xC4503E72L,0L}},{{(-2L),0x0D35BDE0L,(-8L),0x89E67D68L,(-8L),0x0D35BDE0L,(-2L)},{0xC4503E72L,0x3E6DEBB0L,0L,0L,0L,0L,0x3E6DEBB0L},{0L,0x0D35BDE0L,0xDCCF2806L,0xF16A8351L,0L,0xF16A8351L,0xDCCF2806L}}};
        uint32_t ** const *l_2085[1];
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 3; k++)
                    l_2048[i][j][k] = 0x60827E91L;
            }
        }
        for (i = 0; i < 1; i++)
            l_2085[i] = &g_1617;
        l_1875 = l_1874[0][0][0];
        if ((safe_div_func_uint32_t_u_u((((((**l_1886) = (safe_mul_func_int8_t_s_s((((0x73EDB0D5L <= (((*g_1618) = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((((*l_1884) = &g_1617) != (l_1874[4][3][1] , &g_1617)) != (l_1886 != (*g_1023))), (safe_mul_func_uint16_t_u_u(((18446744073709551614UL >= 8L) >= p_15.f3), 0x4976L)))), l_1874[4][1][0]))) >= l_1874[4][3][1])) != l_1874[0][0][0]) >= l_1875), p_15.f0))) | 8UL) && 0L) && p_16), l_1874[0][0][0])))
        { 
            int32_t *l_1889[5][1][1];
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1889[i][j][k] = (void*)0;
                }
            }
            ++l_1891;
            l_1894 &= (g_403 , p_14.f0.f0);
            l_1895 ^= (l_1894 |= l_1890[1][1][1]);
        }
        else
        { 
            struct S0 l_1898 = {0x522A8A2CL};
            union U2 *l_1905 = &g_10;
            int16_t l_1906 = 0L;
            int32_t l_1908 = 8L;
            int32_t l_1922 = 0x448EFADCL;
            int32_t l_1923 = 0x82F8D958L;
            int32_t l_1924 = 0x4B743278L;
            int32_t l_1925 = 0L;
            int32_t l_1926[3];
            uint8_t l_1933 = 0xCAL;
            union U4 l_1964 = {1UL};
            int32_t *l_1986 = &l_1894;
            int32_t *l_2004 = (void*)0;
            union U1 *l_2032[7][2] = {{&l_2002[0],&l_2002[0]},{&g_403,&l_2002[0]},{(void*)0,(void*)0},{(void*)0,&l_2002[0]},{&g_403,&l_2002[0]},{&l_2002[0],&l_2002[0]},{&g_403,&l_2002[0]}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_1926[i] = 0x9B2E00C4L;
            for (g_1203 = 0; (g_1203 > 17); g_1203 = safe_add_func_uint16_t_u_u(g_1203, 6))
            { 
                const uint8_t *l_1902 = &g_1903;
                const uint8_t **l_1901[3][2];
                const uint8_t ***l_1900 = &l_1901[2][0];
                const uint8_t ****l_1899 = &l_1900;
                int32_t l_1917[2];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1901[i][j] = &l_1902;
                }
                for (i = 0; i < 2; i++)
                    l_1917[i] = 0xDDE37272L;
                if ((p_14.f0.f0 < (((l_1898 , 0UL) > ((((*l_1899) = (void*)0) != (l_1904[0][3] = &g_1840)) ^ ((0L != 18446744073709551607UL) , 0x2FAAL))) != (*g_1618))))
                { 
                    if (p_14.f0.f0)
                        break;
                    if (p_15.f4)
                        continue;
                    return l_1905;
                }
                else
                { 
                    int32_t *l_1907 = &g_1547[0][0][0];
                    int32_t *l_1909 = &l_1890[3][1][1];
                    int32_t *l_1910 = &l_1895;
                    int32_t *l_1911 = (void*)0;
                    int32_t *l_1912 = &l_1908;
                    int32_t *l_1913 = &g_43;
                    int32_t *l_1914 = &l_1890[1][1][1];
                    int32_t *l_1915 = (void*)0;
                    int32_t *l_1916 = &l_1890[1][1][1];
                    int32_t *l_1918 = (void*)0;
                    int32_t *l_1919 = &g_1547[1][0][0];
                    int32_t *l_1920 = &l_1894;
                    int32_t *l_1921[4][1] = {{&g_535},{&g_1567},{&g_535},{&g_1567}};
                    int i, j;
                    ++l_1933;
                    l_1936++;
                    (*l_1916) = (((void*)0 == &g_1841[0]) & (safe_mod_func_int64_t_s_s((+((safe_add_func_int32_t_s_s((g_403 , ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u(0xFBL, (!l_1932))) && (-1L)) , (((p_15.f0 != 18446744073709551615UL) <= 1UL) , 0UL)), (*g_1282))) <= l_1890[3][1][2]), 65535UL)) || l_1875)), 4L)) || l_1917[1])), p_14.f0.f0)));
                }
                if (p_16)
                    continue;
            }
            if (p_15.f0)
            { 
                uint8_t l_1953[6] = {0xD7L,0xD7L,0xD7L,0xD7L,0xD7L,0xD7L};
                int32_t l_1960 = 1L;
                struct S0 l_1962[6] = {{0x65F6AFE3L},{0x65F6AFE3L},{-2L},{0x65F6AFE3L},{0x65F6AFE3L},{-2L}};
                struct S0 *l_1963 = &l_1962[4];
                int16_t *l_1976 = &g_45;
                int16_t *l_1977 = (void*)0;
                int16_t *l_1978 = &l_1906;
                union U3 **l_1979 = &g_283[2][1];
                union U4 l_2000 = {18446744073709551615UL};
                int32_t l_2001 = 0x0B69082DL;
                int i;
                (*l_1963) = l_1962[4];
                l_1965 = ((*l_1963) = (l_1964 , p_14.f0));
                if (((safe_sub_func_int8_t_s_s(((*g_1282) ^= (l_1960 == (safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s(g_184[1][2][4], (safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(0x05L, ((l_1928 ^= (l_1953[4] , 0xE4AAL)) | ((*l_1978) = ((*l_1976) = l_1930))))) , (l_1979 == (void*)0)), p_15.f0)))), p_15.f0)))), 0UL)) & l_1890[0][0][1]))
                { 
                    int32_t *l_1980 = &l_1890[1][1][1];
                    int32_t **l_1981 = &l_1980;
                    (*l_1981) = l_1980;
                    l_1894 = (l_1927 = p_15.f3);
                    g_1983 = l_1982;
                }
                else
                { 
                    int8_t *l_1987 = &g_40[1][0][6];
                    const int32_t *l_1994 = &l_1894;
                    const int32_t **l_1993 = &l_1994;
                    const int32_t ***l_1992[4];
                    uint16_t l_1997 = 0x5009L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1992[i] = &l_1993;
                    l_1986 = l_1985;
                    (*l_1986) |= ((&g_1549 == l_1987) >= (p_14.f1 = ((1UL < (((*g_1984) = 0x7F34L) | p_15.f3)) < (*g_1025))));
                    l_1997 |= ((((*g_160) = 0L) != 0x81CC5314D6816FA2LL) , (((*l_1985) >= ((((void*)0 == p_12) >= ((safe_add_func_int64_t_s_s(((*g_160) = (((*g_1511) = ((safe_mul_func_uint16_t_u_u(((void*)0 == l_1992[1]), p_14.f1)) , l_1995)) == (void*)0)), (*l_1986))) >= (*l_1986))) && l_1996)) || l_1932));
                    (*l_1985) = 0xBB31A800L;
                    l_2001 ^= ((l_1960 = ((safe_sub_func_uint8_t_u_u(((**g_1840) = p_14.f1), (l_2000 , p_15.f4))) | (*l_1986))) ^ l_1930);
                }
                (*l_1963) = l_1898;
            }
            else
            { 
                int32_t **l_2003[3];
                uint64_t ***l_2007 = (void*)0;
                struct S0 l_2009 = {0x83B5E089L};
                int16_t *l_2020 = (void*)0;
                int16_t *l_2021 = (void*)0;
                int16_t *l_2022 = &g_98;
                union U2 *l_2052 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_2003[i] = &l_1985;
                l_2004 = (l_1986 = &l_1931[4]);
                for (l_1929 = (-6); (l_1929 > (-14)); l_1929 = safe_sub_func_uint64_t_u_u(l_1929, 2))
                { 
                    if (p_15.f1)
                        break;
                }
                l_2008[0][1] = l_2007;
                l_2009 = l_1898;
                if ((safe_mul_func_uint16_t_u_u(((((((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((**g_1840)--), ((((*l_1985) , l_1891) , (l_1931[1] ^= ((*l_1985) = (0x37C8L == (((*l_1985) < (*l_1985)) , ((*l_2022) |= 1L)))))) & l_1932))), l_1932)), p_14.f0.f0)) | p_15.f3) > (*g_1282)) > (*g_1025)) >= (***g_1023)) == l_1930), 0L)))
                { 
                    uint64_t l_2023 = 0x5C332A7E38A214A5LL;
                    union U2 l_2045[4] = {{{0xC720B889L}},{{0xC720B889L}},{{0xC720B889L}},{{0xC720B889L}}};
                    int32_t *****l_2047 = &g_1860;
                    int i;
                    ++l_2023;
                    l_2049[5][2][4] |= ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((*l_1985), 1)) != (safe_div_func_int64_t_s_s((*g_160), (l_1927 && (((&g_403 == l_2032[5][0]) == (safe_div_func_int16_t_s_s(((*l_2022) ^= (safe_mod_func_uint32_t_u_u(6UL, (l_2048[4][3][1] |= (((*l_2047) = ((safe_lshift_func_int8_t_s_s(((*l_2004) = ((*g_1282) &= ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_2045[2] , p_15.f3), 0x78L)), 0xCAL)), p_16)) >= l_2046))), (*l_1985))) , &g_207[0][0])) != (*g_1158)))))), 1UL))) <= (*l_1985)))))), p_15.f0)) > p_16);
                }
                else
                { 
                    int32_t l_2056 = 0x73513960L;
                    int32_t l_2057 = 0xBF853A03L;
                    int16_t l_2058 = 1L;
                    int32_t l_2059 = 0xD0B1B64FL;
                    int32_t l_2060 = 0L;
                    int32_t l_2061 = 0x587BA888L;
                    (*l_1985) ^= (safe_rshift_func_uint16_t_u_u(((((l_2002[0].f0 , (*l_1986)) < l_2056) | 0UL) | g_43), 1));
                    --g_2062;
                }
            }
            for (l_1908 = 0; (l_1908 >= 25); l_1908 = safe_add_func_int32_t_s_s(l_1908, 2))
            { 
                uint16_t l_2067 = 0xC133L;
                ++l_2067;
                (*l_1986) &= l_1936;
            }
        }
        for (g_152 = (-17); (g_152 < 8); g_152 = safe_add_func_int32_t_s_s(g_152, 1))
        { 
            uint16_t ***l_2077 = &l_1982;
            int32_t l_2082 = (-1L);
            uint32_t ** const **l_2086 = &l_2085[0];
            (*l_1985) = ((g_47 |= (safe_mod_func_int16_t_s_s((g_1870.f0.f0 ^ ((*g_1984)--)), ((l_2076 != ((*l_2077) = l_1982)) ^ (safe_sub_func_uint8_t_u_u(0x42L, (safe_add_func_uint32_t_u_u((l_2082 >= (safe_rshift_func_uint16_t_u_u((((**g_1840) &= ((((((*g_1511) = l_1995) != &p_12) , (void*)0) == &g_1617) | (*l_1985))) || l_1932), p_15.f1))), (*l_1985))))))))) , (-2L));
            (*l_2086) = l_2085[0];
        }
    }
    else
    { 
        union U2 *l_2102 = &g_10;
        int32_t l_2111[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
        int32_t l_2121 = 0xE664DC87L;
        uint16_t l_2123 = 0xB363L;
        union U4 l_2167[3][2] = {{{3UL},{3UL}},{{0UL},{3UL}},{{3UL},{0UL}}};
        union U4 l_2168 = {0UL};
        int i, j;
        if (((!(safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(p_15.f2, 7)), g_2094))) == ((void*)0 == (*g_1617))))
        { 
            union U4 l_2097 = {1UL};
            struct S0 ****l_2108[6][5][2] = {{{&g_1329,&g_1329},{(void*)0,&g_1329},{(void*)0,&g_1329},{&g_1329,&g_1329},{&g_1329,(void*)0}},{{&g_1329,(void*)0},{&g_1329,&g_1329},{&g_1329,&g_1329},{&g_1329,&g_1329},{(void*)0,(void*)0}},{{&g_1329,(void*)0},{(void*)0,&g_1329},{&g_1329,&g_1329},{&g_1329,&g_1329},{&g_1329,(void*)0}},{{&g_1329,(void*)0},{&g_1329,&g_1329},{&g_1329,&g_1329},{(void*)0,&g_1329},{(void*)0,&g_1329}},{{&g_1329,(void*)0},{&g_1329,&g_1329},{&g_1329,(void*)0},{&g_1329,&g_1329},{(void*)0,&g_1329}},{{(void*)0,&g_1329},{&g_1329,&g_1329},{&g_1329,(void*)0},{&g_1329,(void*)0},{&g_1329,&g_1329}}};
            int32_t l_2113 = (-3L);
            int32_t l_2116[4][7][1] = {{{0L},{0x84C7DE8BL},{1L},{1L},{0x84C7DE8BL},{0L},{0x84C7DE8BL}},{{1L},{1L},{0x84C7DE8BL},{0L},{0x84C7DE8BL},{1L},{1L}},{{0x84C7DE8BL},{0L},{0x84C7DE8BL},{1L},{1L},{0x84C7DE8BL},{0L}},{{0x84C7DE8BL},{1L},{1L},{0x84C7DE8BL},{0L},{0x84C7DE8BL},{1L}}};
            int32_t *l_2128 = &l_1894;
            int32_t **l_2127[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2127[i] = &l_2128;
lbl_2162:
            if ((safe_add_func_int32_t_s_s(((l_2097 , (-9L)) >= (p_15.f0 <= (*g_1282))), (g_133 || ((void*)0 != g_2098[0])))))
            { 
                for (p_15.f0 = (-13); (p_15.f0 <= (-2)); p_15.f0++)
                { 
                    return l_2102;
                }
            }
            else
            { 
                struct S0 *****l_2109 = &l_2108[2][2][0];
                int32_t l_2112 = (-1L);
                int32_t l_2115[7] = {0xE2B1300EL,0xE2B1300EL,0xE2B1300EL,0xE2B1300EL,0xE2B1300EL,0xE2B1300EL,0xE2B1300EL};
                uint32_t l_2117 = 0x730470FBL;
                int i;
                if ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(252UL)), (safe_add_func_int8_t_s_s((*g_1282), (((*l_2109) = l_2108[2][2][0]) != l_2110))))))
                { 
                    int32_t *l_2114[4][7] = {{&l_1895,(void*)0,(void*)0,(void*)0,(void*)0,&l_1895,(void*)0},{&g_1567,&l_1895,&l_1895,&g_1567,(void*)0,&g_1567,&l_1895},{&g_1567,&g_1567,&l_1895,(void*)0,&l_1895,&g_1567,&g_1567},{&g_1567,&l_1895,(void*)0,&l_1895,&g_1567,&g_1567,&l_1895}};
                    int i, j;
                    l_2111[3] |= l_2097.f0;
                    ++l_2117;
                    l_2123++;
                }
                else
                { 
                    union U2 *l_2126 = &g_10;
                    return l_2126;
                }
                return p_13;
            }
            l_2129 = &l_2111[3];
            g_1331 = l_2130;
            if ((safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*l_2128) ^ (safe_mod_func_uint64_t_u_u(((**g_1024) |= (((safe_add_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((l_1928 &= (safe_mod_func_int64_t_s_s(((1L != l_2111[3]) || (0x70A65522591552D4LL && (((safe_div_func_int16_t_s_s(g_39, 0x5285L)) || 0x8A3212EC3887D173LL) | p_15.f3))), (*g_160)))), p_15.f0)) | p_16), p_14.f0.f0)) , p_15.f2) , 0xFCD19708E63FEEA1LL)), (-5L)))), p_14.f0.f0)), p_16)) < 4294967286UL), p_14.f0.f0)))
            { 
                uint8_t l_2149 = 0x01L;
                int32_t l_2153 = 0x2AC2FF03L;
                int32_t l_2154[6] = {(-10L),(-10L),1L,(-10L),(-10L),1L};
                uint16_t l_2155 = 0x34E1L;
                int i;
                for (g_1567 = 0; (g_1567 == (-29)); --g_1567)
                { 
                    int32_t l_2152[4][2] = {{0x934C6454L,0x934C6454L},{0x934C6454L,0x934C6454L},{0x934C6454L,0x934C6454L},{0x934C6454L,0x934C6454L}};
                    int i, j;
                    --l_2149;
                    ++l_2155;
                }
                for (g_106.f0 = (-12); (g_106.f0 >= 28); g_106.f0 = safe_add_func_int8_t_s_s(g_106.f0, 9))
                { 
                    int16_t *l_2160[3][4][1] = {{{(void*)0},{(void*)0},{&l_2122[0][1][3]},{&g_98}},{{&l_2122[0][1][3]},{(void*)0},{(void*)0},{&l_2122[0][1][3]}},{{&g_98},{&l_2122[0][1][3]},{(void*)0},{(void*)0}}};
                    int32_t l_2161 = 0xFCB947DAL;
                    int i, j, k;
                    (*l_2129) |= (((*l_2128) |= p_15.f3) == (g_98 &= l_2161));
                    if (l_1895)
                        goto lbl_2162;
                    (*l_2128) ^= (*l_2129);
                    (*g_1331) = p_14.f0;
                }
            }
            else
            { 
                union U4 l_2166 = {18446744073709551615UL};
                for (g_10.f0.f0 = 3; (g_10.f0.f0 >= 0); g_10.f0.f0 -= 1)
                { 
                    uint32_t l_2163[6];
                    union U3 ***l_2169 = &g_282[1];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2163[i] = 0x25791695L;
                    --l_2163[3];
                    (*l_2128) &= (((l_2167[2][1] = l_2166) , l_2168) , (l_2169 == (void*)0));
                }
                for (g_2062 = 0; (g_2062 >= 33); ++g_2062)
                { 
                    uint64_t l_2172 = 0x5DF3ABA37D4A0575LL;
                    l_2172--;
                    (*l_2129) = l_2166.f0;
                }
                (*l_2130) = p_14.f0;
                (*l_2130) = (*g_1331);
            }
            return p_13;
        }
        else
        { 
            int32_t **l_2175 = &l_2129;
            (*l_2129) = ((void*)0 != l_2175);
        }
        if (p_15.f0)
        { 
            int32_t *l_2176 = &g_535;
            g_2177[0] = l_2176;
            return p_13;
        }
        else
        { 
            union U2 *l_2178 = &g_10;
            return l_2178;
        }
    }
    for (l_1894 = (-13); (l_1894 < 10); l_1894 = safe_add_func_uint16_t_u_u(l_1894, 8))
    { 
        const uint32_t ** const l_2192 = &g_1018;
        union U4 l_2193 = {0x6E4E173883CA8B6ALL};
        uint8_t ***l_2194 = &g_1840;
        int32_t l_2195 = 0xB35B4449L;
        int32_t l_2196 = 2L;
        l_2196 |= ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((*g_1282), ((l_2195 = (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((+p_15.f1), (((***g_1023) ^= 0x57850C049AA43C15LL) || (l_2192 != (*g_2099))))), (((l_2193 = l_2193) , l_2194) != l_1904[2][1]))), 4294967295UL))) , (*g_1282)))), (*g_1282))) | 0xAAL);
        return (*l_1995);
    }
    (*l_2129) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*g_1618) < 0xC8606661L), (0UL & (safe_add_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((-7L), ((safe_rshift_func_uint16_t_u_u((*l_2129), 11)) , (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(1L, 9)), (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((void*)0 == &g_1841[0]), 4)) > 0x535FL), p_15.f3))))))) > (*l_2129)), 18446744073709551608UL))))), (*g_1984)));
    (*l_2129) = (safe_mul_func_uint16_t_u_u(p_15.f4, (((++(*g_1984)) | (safe_mul_func_uint16_t_u_u(((*l_2129) , ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((((*l_2130) , p_15.f3) > (safe_rshift_func_uint8_t_u_s(0UL, 5))) >= ((l_1895 |= (safe_div_func_uint8_t_u_u(((((**g_1840) = (*l_2129)) == ((((**l_1995) = ((safe_mul_func_int8_t_s_s(((p_15.f2 && (*l_2129)) && 0xFD216E5EL), p_15.f4)) , (**l_1995))) , 0xCCL) != 0x37L)) != (*l_2129)), 255UL))) ^ 0x93L)), l_2231)), (*l_2129))) | (*l_2129))), 65528UL))) >= p_15.f0)));
    return p_13;
}



static union U2 * func_17(int32_t  p_18, int16_t  p_19, union U2 * p_20, union U2 * p_21)
{ 
    uint32_t l_697 = 0UL;
    int32_t l_710 = 0xA46DF9EAL;
    int32_t l_720 = (-1L);
    union U1 l_746 = {{0x6E7B4261L}};
    int32_t ****l_756 = &g_207[5][0];
    union U2 **l_764[3][2][7] = {{{(void*)0,&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9}},{{&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0}},{{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9,&g_9}}};
    union U3 ****l_804 = &g_798;
    int32_t *l_807 = &l_720;
    const uint64_t * const l_861 = &g_842;
    const uint64_t * const *l_860 = &l_861;
    uint32_t l_896 = 0xEC836CCFL;
    int32_t l_907 = 0L;
    int32_t l_908 = 0xDA7D068AL;
    int32_t l_909 = 0xBC3EF24BL;
    int32_t l_911 = 0x69FFA41DL;
    uint32_t *l_926 = &g_204;
    uint32_t *l_929 = &l_697;
    uint32_t *l_930 = &g_10.f1;
    uint16_t *l_935 = &g_55;
    union U4 l_974 = {18446744073709551615UL};
    int32_t * const l_979 = &l_720;
    int32_t *****l_1009[4] = {&l_756,&l_756,&l_756,&l_756};
    union U4 **l_1027 = (void*)0;
    uint16_t l_1046 = 0x31E4L;
    int64_t **l_1115 = (void*)0;
    union U3 l_1122 = {0x63301AE1L};
    int32_t *l_1136 = &g_202[1].f0;
    int32_t **l_1135[5][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int32_t l_1145 = (-1L);
    uint16_t l_1175 = 0x8A09L;
    int8_t *l_1223 = &g_46;
    uint64_t ***l_1233 = &g_1024;
    int64_t l_1256 = 0L;
    struct S0 l_1441 = {0xA6C92617L};
    struct S0 l_1442 = {-1L};
    uint8_t l_1506 = 255UL;
    struct S0 * const *l_1515 = &g_1331;
    uint8_t l_1581[5] = {0x8CL,0x8CL,0x8CL,0x8CL,0x8CL};
    int32_t l_1628[6] = {0L,0L,0L,0L,0L,0L};
    const union U3 l_1685 = {0x78B79D31L};
    uint8_t *l_1699 = &l_1122.f3;
    union U3 *****l_1752 = &g_797[0];
    int32_t l_1759 = 0xF0C1E179L;
    int8_t l_1785 = 0x90L;
    uint32_t l_1786 = 0x46A2B53CL;
    int8_t l_1823 = 1L;
    struct S0 **l_1824[2][6][3] = {{{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331}},{{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331},{&g_1331,&g_1331,&g_1331}}};
    int i, j, k;
lbl_1709:
    for (g_45 = 0; (g_45 <= 1); g_45 += 1)
    { 
        int32_t *l_685 = &g_535;
        uint16_t l_692[6][4] = {{65535UL,0x5034L,0xB141L,65526UL},{1UL,0x667DL,0xB141L,1UL},{0x5034L,0x4935L,0x5034L,1UL},{0xB141L,0x667DL,1UL,65526UL},{65529UL,65535UL,0x667DL,0x667DL},{1UL,1UL,0x667DL,0x5034L}};
        union U3 l_696 = {0L};
        int32_t l_714 = (-4L);
        int32_t l_721 = 0xFBE564B5L;
        int32_t l_722 = (-1L);
        uint16_t l_723 = 0x9BE8L;
        int16_t l_733 = 0x26E4L;
        int32_t ***l_738[2];
        union U4 *l_761 = &g_335;
        int i, j;
        for (i = 0; i < 2; i++)
            l_738[i] = &g_208;
        l_685 = l_685;
        for (p_18 = 0; (p_18 <= 1); p_18 += 1)
        { 
            int32_t l_694[5];
            uint8_t *l_695 = &g_108.f3;
            uint16_t *l_703 = (void*)0;
            uint16_t *l_704 = &g_360;
            int32_t l_759 = 0x8B51CAC0L;
            union U4 *l_765 = &g_335;
            int64_t l_803 = 0xC978D107DC8F2338LL;
            int32_t *l_806 = &l_710;
            int i;
            for (i = 0; i < 5; i++)
                l_694[i] = 0L;
            (*l_685) ^= (((*g_9) , g_99) & (safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((l_692[1][3] != ((*g_9) , (g_181 == (~(((*l_695) = l_694[4]) , (l_696 , 0x2B37L)))))), l_697)), p_19)));
            if ((safe_rshift_func_uint16_t_u_u((((((*l_704) = (safe_unary_minus_func_int8_t_s(((safe_mul_func_int16_t_s_s(g_55, 0x030BL)) <= p_19)))) && p_18) >= (*g_160)) , (!((safe_mod_func_uint8_t_u_u((g_226.f0 == (safe_add_func_uint16_t_u_u(0x490CL, 0x6CEDL))), 0xC2L)) <= l_697))), p_19)))
            { 
                int32_t *l_711 = &l_694[2];
                int32_t *l_712 = &l_694[4];
                int32_t l_713 = 0xF88745E4L;
                int32_t *l_715 = (void*)0;
                int32_t *l_716 = &g_43;
                int32_t *l_717 = &l_714;
                int32_t *l_718 = (void*)0;
                int32_t *l_719[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_719[i] = &l_694[0];
                (*l_685) &= 0xB9EC9371L;
                l_723--;
            }
            else
            { 
                int32_t l_726 = 0L;
                int32_t * const *l_740[5];
                int32_t * const **l_739 = &l_740[3];
                uint32_t *l_753[5] = {&l_697,&l_697,&l_697,&l_697,&l_697};
                struct S0 l_760 = {0x00BF3AC6L};
                int i;
                for (i = 0; i < 5; i++)
                    l_740[i] = &l_685;
                (*l_685) |= (&p_18 == (void*)0);
                if ((l_726 == 65528UL))
                { 
                    uint32_t *l_727 = &g_204;
                    (*l_685) ^= ((++(*l_727)) <= (safe_lshift_func_int16_t_s_u(g_60.f0, 13)));
                }
                else
                { 
                    struct S0 *l_732 = &g_10.f0;
                    int16_t *l_741[2][5] = {{&g_45,(void*)0,&g_45,&g_45,(void*)0},{(void*)0,&g_45,&g_45,(void*)0,&g_45}};
                    union U4 l_742 = {0xB7528EB9E8552F80LL};
                    int32_t *l_743 = &l_710;
                    int i, j;
                    (***l_739) = ((((*l_732) = g_60) , l_733) >= ((g_535 > (safe_lshift_func_uint16_t_u_s((*l_685), g_55))) && (((((*l_704)--) , (p_19 &= ((l_738[0] == l_739) >= p_18))) != g_335.f0) || g_55)));
                    (*l_685) &= (l_742 , l_742.f1);
                    l_694[1] |= p_18;
                    l_743 = &p_18;
                }
                l_759 |= (safe_mul_func_uint8_t_u_u((l_746 , (safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_95, 9)), (((l_710 ^= 5UL) | g_202[1].f2) > (((safe_mul_func_uint8_t_u_u((l_756 == &g_207[4][0]), (l_694[4] = ((safe_lshift_func_uint8_t_u_u(((((void*)0 == &g_226) > (-10L)) , g_181), 5)) < 0x4FL)))) || 0xCDD10D1700F88D58LL) >= (-1L))))) >= g_95), 0x03A5L))), g_535));
                g_60 = l_760;
                (***l_739) |= (l_761 != ((g_204 = (safe_add_func_int64_t_s_s((l_764[1][1][4] != &g_9), ((p_19 | p_18) ^ p_19)))) , l_765));
            }
            for (g_156 = 0; (g_156 <= 1); g_156 += 1)
            { 
                int32_t l_768 = 0xC13B5D2DL;
                union U3 ****l_796 = (void*)0;
                const int32_t l_801 = 0L;
                union U3 *****l_805 = &g_797[0];
                int i, j, k;
                l_768 = ((safe_sub_func_uint64_t_u_u(1UL, g_40[(p_18 + 1)][p_18][(g_156 + 5)])) < (p_19 == 0xA43C81EABA3C9797LL));
                for (g_596 = 1; (g_596 >= 0); g_596 -= 1)
                { 
                    int32_t l_783 = (-2L);
                    l_783 |= (safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(((*l_695) ^= (*l_685)), 2)) , (p_19 | (safe_sub_func_uint16_t_u_u(g_646, (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_202[1].f3, 14)), (safe_lshift_func_uint8_t_u_s(p_19, 4)))))))), g_202[1].f4)), 6));
                }
                for (l_696.f2 = 0; (l_696.f2 <= 1); l_696.f2 += 1)
                { 
                    uint64_t l_784 = 0x7DEBCE334F8AF09BLL;
                    union U3 *****l_799 = &g_797[0];
                    int8_t *l_800 = &g_40[1][1][6];
                    int16_t *l_802 = &g_646;
                    l_784 ^= (-9L);
                    (*l_685) |= (safe_mod_func_int64_t_s_s(p_19, ((safe_mod_func_uint16_t_u_u((((*l_802) |= (safe_unary_minus_func_int8_t_s((g_60 , (g_46 = (safe_add_func_uint16_t_u_u(((((*l_800) = ((((safe_mod_func_int64_t_s_s(3L, p_19)) < ((1L > (safe_sub_func_int32_t_s_s((((((l_796 != ((*l_799) = g_797[0])) == 0xC6F0L) <= p_18) & 0x86L) ^ g_99), 0L))) & 5L)) < p_19) <= 0x0BD4L)) || l_801) | p_18), 0xCA41L))))))) ^ 1L), g_58.f0)) ^ p_18)));
                    l_694[4] |= p_19;
                    if (p_19)
                        break;
                    l_803 ^= (0x75L != p_18);
                }
                (*l_805) = l_804;
                l_807 = (l_806 = &p_18);
            }
            if (p_19)
                break;
        }
    }
lbl_915:
    for (g_46 = 0; (g_46 > (-23)); --g_46)
    { 
        int32_t *l_815 = &g_535;
        for (g_403.f1 = (-23); (g_403.f1 >= 58); ++g_403.f1)
        { 
            uint32_t *l_826 = &l_697;
            uint16_t *l_829 = &g_55;
            int32_t l_830 = 0xB1963487L;
            int32_t l_831 = 1L;
            for (l_720 = 0; (l_720 <= 1); ++l_720)
            { 
                int32_t **l_814[4][2][2] = {{{(void*)0,&l_807},{(void*)0,(void*)0}},{{(void*)0,&l_807},{(void*)0,(void*)0}},{{(void*)0,&l_807},{(void*)0,(void*)0}},{{(void*)0,&l_807},{(void*)0,(void*)0}}};
                int i, j, k;
                l_815 = &p_18;
            }
            l_831 &= ((((safe_unary_minus_func_int64_t_s(((safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s((&l_697 != &g_204), (((((+((0xD85B914502E30E47LL ^ (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((p_19 != g_184[1][1][0]) && ((*l_829) = (((*l_826) = 0x6CA1A6F5L) <= ((((safe_add_func_int32_t_s_s(p_19, (*l_815))) | 255UL) != 0UL) && 18446744073709551610UL)))) < 0xB3FF7B220A1B280DLL) && 4294967295UL), p_19)), p_19))) != 0xBDB88B63L)) || 18446744073709551608UL) , &g_360) == l_829) , p_19))), l_830)) , l_830))) & l_830) >= 0x8335L) , 0x46C63BC0L);
        }
    }
lbl_859:
    (*l_807) = (+p_19);
    for (g_43 = (-4); (g_43 < (-14)); g_43 = safe_sub_func_uint8_t_u_u(g_43, 6))
    { 
        int32_t *l_839[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_226.f0,(void*)0},{(void*)0,(void*)0,&g_226.f0,&g_226.f0},{(void*)0,(void*)0,(void*)0,&g_226.f0}};
        int32_t l_843 = 0x01440DEDL;
        uint16_t *l_844 = &g_55;
        uint64_t *l_849 = &g_335.f0;
        int32_t *l_850 = &g_535;
        int32_t ****l_892 = &g_207[5][0];
        int8_t l_893 = 0x77L;
        uint64_t l_894 = 1UL;
        int32_t l_902 = 0xD546A1B4L;
        int32_t l_903 = 0xEBC1F2C0L;
        int32_t l_904 = (-8L);
        int32_t l_905 = (-1L);
        int32_t l_906 = 0xB94988C1L;
        int32_t l_910[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_910[i] = 0x5F6ECA35L;
        if (((*l_850) ^= (safe_mul_func_int8_t_s_s((((*l_849) = ((((safe_sub_func_uint8_t_u_u(((g_202[1].f0 ^= 0L) , (safe_rshift_func_uint16_t_u_u(((g_842 && l_843) || 4294967290UL), ((*l_844) = g_202[1].f0)))), (safe_div_func_uint8_t_u_u((((p_18 , ((safe_lshift_func_int16_t_s_s(0xCEBDL, 9)) > p_18)) > 0x37D11F66L) ^ p_18), (-1L))))) <= 0x4B1AL) != l_843) <= g_102[3])) || (*g_160)), p_18))))
        { 
            int16_t l_856 = 0x6BF4L;
            int32_t l_880 = 0L;
            int8_t *l_895 = &g_40[1][1][6];
            int32_t **l_897 = (void*)0;
            int32_t **l_898 = &l_807;
            int32_t *l_899 = &g_535;
            int32_t *l_900 = &l_720;
            int32_t *l_901[4][3][2] = {{{&l_710,&l_843},{&l_843,&l_710},{&l_843,&l_843}},{{&l_710,&l_843},{&l_843,&l_710},{&l_843,&l_843}},{{&l_710,&l_843},{&l_843,&l_710},{&l_843,&l_843}},{{&l_710,&l_843},{&l_843,&l_710},{&l_843,&l_843}}};
            uint32_t l_912[1][4] = {{9UL,9UL,9UL,9UL}};
            int i, j, k;
            for (g_360 = 0; (g_360 <= 1); g_360 += 1)
            { 
                const int32_t *l_865 = &g_866;
                for (g_335.f0 = 0; (g_335.f0 <= 1); g_335.f0 += 1)
                { 
                    int16_t *l_853 = &g_646;
                    int8_t *l_857[4][5][2] = {{{&g_40[2][0][0],(void*)0},{&g_40[1][0][2],&g_46},{(void*)0,&g_46},{&g_40[1][0][2],(void*)0},{&g_40[2][0][0],&g_40[2][0][0]}},{{&g_40[2][0][0],(void*)0},{&g_40[1][0][2],&g_46},{(void*)0,&g_46},{&g_40[1][0][2],(void*)0},{&g_40[2][0][0],&g_40[2][0][0]}},{{&g_40[2][0][0],(void*)0},{&g_40[1][0][2],&g_46},{(void*)0,&g_46},{&g_40[1][0][2],(void*)0},{&g_40[2][0][0],&g_40[2][0][0]}},{{&g_40[2][0][0],(void*)0},{&g_40[1][0][2],&g_46},{(void*)0,&g_46},{&g_40[1][0][2],(void*)0},{&g_40[2][0][0],&g_40[2][0][0]}}};
                    int i, j, k;
                    (*l_807) = ((safe_add_func_int8_t_s_s(((-8L) & g_184[(g_335.f0 + 1)][(g_360 + 3)][(g_335.f0 + 4)]), (((*l_853) = p_18) == ((safe_add_func_int32_t_s_s(l_856, (l_857[2][1][1] != &g_40[1][0][4]))) != g_858)))) , p_19);
                    if (g_58.f0)
                        goto lbl_859;
                    g_283[(g_360 + 2)][g_360] = g_283[g_335.f0][g_360];
                }
                for (g_46 = 3; (g_46 >= 0); g_46 -= 1)
                { 
                    const uint64_t * const **l_862 = (void*)0;
                    const uint64_t * const **l_863 = (void*)0;
                    const uint64_t * const **l_864 = &l_860;
                    const int32_t *l_868 = &l_710;
                    const int32_t **l_867 = &l_868;
                    int16_t l_873 = 5L;
                    (*l_864) = l_860;
                    (*l_867) = (l_865 = &p_18);
                    l_873 |= (safe_add_func_int8_t_s_s((-1L), (safe_rshift_func_uint8_t_u_u(1UL, 0))));
                }
            }
            (*l_807) = (l_856 > ((safe_add_func_int16_t_s_s((((((*p_21) , ((*l_895) = ((safe_sub_func_int64_t_s_s((((((((((safe_add_func_uint8_t_u_u((((-8L) && (l_880 = (-5L))) <= (((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(0x96L, (safe_unary_minus_func_int32_t_s(p_18)))) <= ((((safe_lshift_func_int16_t_s_s((&g_207[5][0] == l_892), l_856)) | (*l_807)) > p_19) == p_19)) == p_18), 0xFCL)) == l_856), l_856)), 0x872BL)) >= (*l_850)) | 0xD0D5B1C25365CDBFLL)), l_856)) , l_893) | p_18) & (-4L)) , l_856) , l_894) , (*l_850)) < 1L) , p_19), g_335.f0)) || g_335.f1))) < 0x27L) | l_856) ^ 0L), p_19)) ^ g_55));
            if (l_896)
                continue;
            (*l_898) = &p_18;
            --l_912[0][2];
        }
        else
        { 
            if (l_720)
                goto lbl_915;
        }
        (*l_850) |= (p_19 <= 6UL);
    }
    if ((safe_mul_func_uint8_t_u_u((((((*l_935) = ((safe_div_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((p_19 != (((*l_930) = ((*l_807) , ((*l_807) = ((*l_929) = (safe_sub_func_uint32_t_u_u(4294967295UL, (++(*l_926)))))))) , (p_19 > ((((safe_div_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((&g_9 == (void*)0), 0)) >= (l_746.f0 , (*g_160))) < 4294967294UL), (*l_807))) , (void*)0) != p_21) > (*l_807))))), p_19)), 0x7ACDC19A22D0946FLL)) || p_18)) > p_19) && p_19) , g_40[2][0][2]), 0L)))
    { 
        uint32_t l_942 = 0x45FE79AEL;
        const union U1 *l_963 = &g_403;
        int32_t l_989 = (-1L);
        int32_t l_1001 = (-1L);
        int32_t l_1004 = 0xB3C78FBDL;
        int32_t ***** const l_1008[7][7][3] = {{{(void*)0,&l_756,&l_756},{&l_756,(void*)0,&l_756},{(void*)0,&l_756,(void*)0},{&l_756,&l_756,&l_756},{&l_756,&l_756,(void*)0},{&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756}},{{&l_756,(void*)0,&l_756},{&l_756,&l_756,(void*)0},{&l_756,&l_756,&l_756},{(void*)0,&l_756,&l_756},{&l_756,(void*)0,&l_756},{(void*)0,&l_756,(void*)0},{&l_756,&l_756,(void*)0}},{{&l_756,(void*)0,&l_756},{&l_756,&l_756,&l_756},{&l_756,(void*)0,&l_756},{&l_756,&l_756,&l_756},{&l_756,(void*)0,(void*)0},{(void*)0,&l_756,&l_756},{(void*)0,&l_756,&l_756}},{{&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756},{&l_756,(void*)0,(void*)0},{&l_756,(void*)0,&l_756},{&l_756,&l_756,(void*)0},{&l_756,&l_756,&l_756},{(void*)0,(void*)0,&l_756}},{{&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756},{(void*)0,(void*)0,&l_756},{(void*)0,(void*)0,&l_756},{&l_756,&l_756,(void*)0},{(void*)0,&l_756,&l_756}},{{&l_756,(void*)0,(void*)0},{&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756},{(void*)0,&l_756,&l_756},{&l_756,&l_756,(void*)0},{&l_756,&l_756,&l_756}},{{&l_756,&l_756,(void*)0},{&l_756,(void*)0,&l_756},{(void*)0,&l_756,&l_756},{&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756},{&l_756,&l_756,(void*)0},{&l_756,&l_756,(void*)0}}};
        union U4 *l_1031 = (void*)0;
        const union U3 l_1036 = {0L};
        struct S0 l_1044[5] = {{0x5115FAE7L},{0x5115FAE7L},{0x5115FAE7L},{0x5115FAE7L},{0x5115FAE7L}};
        union U1 l_1160 = {{4L}};
        int64_t **l_1179 = &g_160;
        int32_t ** const ***l_1212 = (void*)0;
        uint16_t l_1215 = 0xFC0EL;
        int16_t l_1228 = 0x2A05L;
        uint64_t ****l_1234[5][3][3] = {{{(void*)0,&g_1023,(void*)0},{(void*)0,&g_1023,&l_1233},{&g_1023,&g_1023,&g_1023}},{{(void*)0,&g_1023,&g_1023},{&g_1023,&g_1023,(void*)0},{(void*)0,&g_1023,(void*)0}},{{&g_1023,&g_1023,(void*)0},{(void*)0,(void*)0,&g_1023},{(void*)0,&g_1023,&g_1023}},{{&g_1023,&g_1023,&l_1233},{(void*)0,&g_1023,(void*)0},{(void*)0,&g_1023,&l_1233}},{{&g_1023,&g_1023,&g_1023},{(void*)0,&g_1023,&g_1023},{&g_1023,&g_1023,(void*)0}}};
        uint64_t l_1239 = 0xA012DE2F0467E6C1LL;
        union U3 *l_1356 = &g_1357[1][0];
        union U3 **l_1383 = &l_1356;
        union U3 **l_1384[3][6] = {{&g_283[1][0],&l_1356,&g_283[1][0],&l_1356,&g_283[1][0],&l_1356},{&l_1356,&l_1356,&l_1356,&l_1356,&l_1356,&l_1356},{&g_283[1][0],&l_1356,&g_283[1][0],&l_1356,&g_283[1][0],&l_1356}};
        union U3 **l_1385 = &l_1356;
        union U3 **l_1386[6] = {&g_283[4][1],&g_283[4][1],&l_1356,&g_283[4][1],&g_283[4][1],&l_1356};
        union U3 **l_1387 = &g_283[5][1];
        union U3 **l_1388[7] = {&g_283[4][1],&g_283[4][1],&g_283[4][1],&g_283[4][1],&g_283[4][1],&g_283[4][1],&g_283[4][1]};
        union U3 **l_1389 = &g_283[4][1];
        union U3 **l_1390[3][6] = {{(void*)0,(void*)0,&l_1356,&l_1356,&l_1356,(void*)0},{&l_1356,(void*)0,&l_1356,&l_1356,(void*)0,&l_1356},{(void*)0,&l_1356,&l_1356,&l_1356,(void*)0,&l_1356}};
        union U3 **l_1391 = (void*)0;
        union U3 **l_1392 = &g_283[4][1];
        union U3 *** const l_1382[2][3][4] = {{{&l_1390[0][2],&l_1383,(void*)0,&l_1387},{&l_1392,&l_1390[0][2],&l_1391,&l_1385},{&l_1386[5],&l_1389,&l_1386[5],&l_1385}},{{&l_1391,&l_1390[0][2],&l_1392,&l_1387},{(void*)0,&l_1383,&l_1390[0][2],&l_1390[0][2]},{&l_1388[5],&l_1388[5],&l_1390[0][2],&l_1386[5]}}};
        union U3 *** const *l_1381 = &l_1382[1][0][2];
        union U2 ** const l_1428 = &g_9;
        uint16_t l_1434 = 0x4D51L;
        const uint64_t l_1456 = 18446744073709551607UL;
        uint8_t *l_1464 = &g_202[1].f3;
        int32_t l_1469[1];
        int16_t l_1474 = 0x07F1L;
        uint64_t l_1635 = 0x0948715181A5D0FALL;
        int16_t l_1642 = 1L;
        int32_t l_1661 = 0L;
        int32_t l_1686 = 0xE7088A52L;
        int64_t l_1691 = (-3L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1469[i] = 0L;
        if ((((safe_sub_func_int64_t_s_s(((((p_19 & (((((0x2EEFEF17L ^ (((*l_935)--) ^ ((safe_div_func_uint32_t_u_u((l_942 | ((*g_160) = 0x77EBC3CB2F1BD90CLL)), (safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u(g_60.f0, (safe_rshift_func_int16_t_s_u((g_10.f1 ^ (g_842 != 0xA8AB17BD36499B44LL)), g_866)))), p_19)))) | (*l_807)))) , (void*)0) == &l_935) >= g_153) < l_942)) ^ (-1L)) <= g_535) || g_106.f3), p_18)) > g_102[3]) | g_204))
        { 
            int32_t l_950 = 1L;
            int32_t l_958[3][5] = {{0xD73D4031L,(-1L),(-1L),0xD73D4031L,(-1L)},{0xD73D4031L,0xD73D4031L,0x5876F491L,0xD73D4031L,0xD73D4031L},{(-1L),0xD73D4031L,(-1L),(-1L),0xD73D4031L}};
            int32_t *l_959 = (void*)0;
            int32_t *l_960[3];
            int16_t *l_966 = &g_45;
            int32_t **l_967 = (void*)0;
            int32_t **l_968 = &l_959;
            int64_t * const l_976 = &g_133;
            union U3 l_987 = {-10L};
            int i, j;
            for (i = 0; i < 3; i++)
                l_960[i] = &l_710;
            l_911 ^= ((~((*g_160) = (l_950 = (-4L)))) > (((void*)0 == &g_798) | (((((((9UL & (((safe_mul_func_uint64_t_u_u((+(-7L)), ((0L && g_40[2][1][6]) & 0UL))) > g_360) > p_18)) | (*l_807)) < l_958[1][2]) , 0x86CAF561DCFDDF8CLL) , 65526UL) & g_204) != l_958[1][2])));
            for (g_10.f0.f0 = 0; (g_10.f0.f0 > (-19)); g_10.f0.f0 = safe_sub_func_int64_t_s_s(g_10.f0.f0, 1))
            { 
                const union U1 **l_964 = (void*)0;
                const union U1 *l_965[4][2][2] = {{{&g_403,&g_403},{&g_403,&g_403}},{{&g_403,&g_403},{&g_403,&g_403}},{{&g_403,&g_403},{&g_403,&g_403}},{{&g_403,&g_403},{&g_403,&g_403}}};
                int i, j, k;
                l_965[0][1][1] = l_963;
            }
            (*l_968) = (((*l_966) = 0xF08EL) , &p_18);
            if ((*l_807))
            { 
                int64_t *l_975[1];
                int32_t **l_980 = &l_807;
                int i;
                for (i = 0; i < 1; i++)
                    l_975[i] = &g_133;
                (*l_807) = (safe_rshift_func_int8_t_s_u((~((safe_sub_func_int64_t_s_s((((*l_929) ^= g_98) == 0xD411B23FL), ((l_974 , l_975[0]) != (g_184[1][0][1] , l_976)))) && ((*l_935)++))), g_156));
                (*l_980) = l_979;
                (*l_968) = &p_18;
                for (l_974.f0 = 28; (l_974.f0 < 29); l_974.f0++)
                { 
                    union U4 *l_983[6][4][5] = {{{&l_974,(void*)0,&l_974,&g_335,&l_974},{(void*)0,&l_974,&g_335,(void*)0,&l_974},{(void*)0,&g_335,&l_974,&g_335,(void*)0},{&l_974,(void*)0,&g_335,&l_974,(void*)0}},{{&l_974,&g_335,&l_974,(void*)0,&l_974},{(void*)0,(void*)0,&l_974,(void*)0,(void*)0},{&g_335,(void*)0,&l_974,&l_974,(void*)0},{(void*)0,&g_335,&l_974,(void*)0,&l_974}},{{&l_974,(void*)0,&l_974,&g_335,&l_974},{&l_974,(void*)0,&g_335,&g_335,(void*)0},{(void*)0,&g_335,&l_974,&g_335,&g_335},{(void*)0,(void*)0,&g_335,(void*)0,(void*)0}},{{&l_974,&g_335,&l_974,&l_974,&l_974},{(void*)0,&l_974,&l_974,(void*)0,&l_974},{(void*)0,(void*)0,&l_974,(void*)0,(void*)0},{&l_974,(void*)0,&l_974,&l_974,(void*)0}},{{&l_974,&l_974,&l_974,&g_335,&l_974},{(void*)0,(void*)0,&g_335,(void*)0,(void*)0},{&g_335,&g_335,&l_974,&g_335,(void*)0},{(void*)0,&g_335,&g_335,(void*)0,&l_974}},{{&l_974,&g_335,&l_974,(void*)0,&l_974},{&l_974,(void*)0,&l_974,&g_335,(void*)0},{(void*)0,&l_974,&l_974,(void*)0,&g_335},{(void*)0,(void*)0,&l_974,(void*)0,(void*)0}}};
                    union U4 **l_984[7][3] = {{&l_983[4][3][0],&g_338,&l_983[4][3][0]},{&g_338,&g_338,&g_338},{&l_983[4][3][0],&g_338,&l_983[4][3][0]},{&g_338,&g_338,&g_338},{&l_983[4][3][0],&g_338,&l_983[4][3][0]},{&g_338,&g_338,&g_338},{&l_983[4][3][0],&g_338,&l_983[4][3][0]}};
                    int i, j, k;
                    g_338 = l_983[4][3][0];
                    return &g_10;
                }
            }
            else
            { 
                int32_t ***l_988 = &l_967;
                l_989 &= ((l_987 , p_18) == (l_988 != (*l_756)));
            }
        }
        else
        { 
            int32_t l_999 = 0L;
            int32_t l_1000 = 0x75241DD2L;
            int32_t l_1002 = (-10L);
            int32_t l_1003 = 0x3BAD94A0L;
            const uint32_t *l_1016[3][2][7] = {{{(void*)0,&g_204,(void*)0,&l_942,&g_204,&l_942,(void*)0},{&g_204,&g_204,&g_10.f1,&l_942,&g_204,&g_10.f1,&g_204}},{{&l_942,(void*)0,(void*)0,&l_942,&l_942,(void*)0,&l_942},{(void*)0,&g_204,&l_942,&l_942,&g_204,(void*)0,(void*)0}},{{&g_204,&l_942,&g_10.f1,&g_204,&g_204,&g_10.f1,&l_942},{&g_204,(void*)0,(void*)0,&g_204,&l_942,&l_942,&g_204}}};
            uint32_t *l_1022[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_1028 = &l_1003;
            struct S0 l_1034 = {0x63AB22CBL};
            union U2 *l_1039[7][6][3] = {{{&g_10,&g_10,&g_10},{(void*)0,&g_10,&g_10},{&g_10,(void*)0,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{(void*)0,&g_10,&g_10}},{{&g_10,&g_10,&g_10},{&g_10,(void*)0,&g_10},{&g_10,&g_10,(void*)0},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10}},{{&g_10,&g_10,&g_10},{&g_10,(void*)0,&g_10},{(void*)0,&g_10,&g_10},{&g_10,&g_10,&g_10},{(void*)0,&g_10,&g_10},{&g_10,&g_10,&g_10}},{{&g_10,(void*)0,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{(void*)0,&g_10,&g_10}},{{&g_10,&g_10,&g_10},{(void*)0,(void*)0,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10}},{{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{(void*)0,&g_10,&g_10},{&g_10,(void*)0,&g_10}},{{&g_10,&g_10,&g_10},{&g_10,&g_10,&g_10},{(void*)0,&g_10,&g_10},{&g_10,&g_10,&g_10},{&g_10,(void*)0,&g_10},{&g_10,&g_10,&g_10}}};
            int32_t l_1079 = (-6L);
            int32_t l_1080 = 9L;
            int32_t l_1081 = 0xDEC7E34AL;
            int32_t l_1082[3][5][5] = {{{1L,0x825FAB75L,(-9L),(-9L),0x825FAB75L},{(-4L),0xACD8DDCBL,(-1L),(-7L),0x1099D53BL},{1L,0x825FAB75L,0x825FAB75L,0x825FAB75L,7L},{0xC954BC7BL,0xD26D16F0L,0x1099D53BL,0xACD8DDCBL,0x68E9CD90L},{7L,7L,0x825FAB75L,0x825FAB75L,7L}},{{0xC954BC7BL,0xD26D16F0L,0x1099D53BL,0xACD8DDCBL,0x68E9CD90L},{7L,7L,0x825FAB75L,0x825FAB75L,7L},{0xC954BC7BL,0xD26D16F0L,0x1099D53BL,0xACD8DDCBL,0x68E9CD90L},{7L,7L,0x825FAB75L,0x825FAB75L,7L},{0xC954BC7BL,0xD26D16F0L,0x1099D53BL,0xACD8DDCBL,0x68E9CD90L}},{{7L,7L,0x825FAB75L,0x825FAB75L,7L},{0xC954BC7BL,0xD26D16F0L,0x1099D53BL,0xACD8DDCBL,0x68E9CD90L},{7L,7L,0x825FAB75L,0x825FAB75L,7L},{0xC954BC7BL,0xD26D16F0L,0x1099D53BL,0xACD8DDCBL,0x68E9CD90L},{7L,7L,0x825FAB75L,0x825FAB75L,7L}}};
            int8_t *l_1146 = &g_40[2][1][1];
            uint8_t *l_1147 = &g_108.f3;
            int i, j, k;
lbl_1057:
            for (g_156 = 0; (g_156 <= 3); g_156 += 1)
            { 
                int16_t l_997 = 0x83BEL;
                int32_t l_998[4][3] = {{(-1L),(-1L),(-1L)},{0xD17C5613L,0xD17C5613L,0xFB261E39L},{(-1L),(-1L),(-1L)},{0xD17C5613L,0xD17C5613L,0xFB261E39L}};
                int32_t *l_1010 = &l_998[2][0];
                int32_t *l_1011[3];
                const uint32_t **l_1017[2];
                uint32_t **l_1020 = (void*)0;
                uint32_t **l_1021 = (void*)0;
                uint64_t ****l_1026 = &g_1023;
                struct S0 l_1056 = {0x733CD1ABL};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1011[i] = &l_710;
                for (i = 0; i < 2; i++)
                    l_1017[i] = &l_1016[0][1][4];
                for (g_185 = 0; (g_185 <= 0); g_185 += 1)
                { 
                    int32_t *l_990 = &l_720;
                    int32_t *l_991 = &l_710;
                    int32_t *l_992 = &l_720;
                    int32_t *l_993 = &l_720;
                    int32_t *l_994 = (void*)0;
                    int32_t *l_995 = (void*)0;
                    int32_t *l_996[1][7][3];
                    uint32_t l_1005 = 0x2AFB85B1L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_996[i][j][k] = &l_989;
                        }
                    }
                    l_1005++;
                    l_1009[0] = l_1008[5][4][1];
                    l_1011[2] = (l_1010 = &p_18);
                }
                if ((g_102[g_156] & ((*l_930) = (safe_mod_func_int16_t_s_s(((+(g_1015 == ((*l_1026) = (((g_1018 = l_1016[1][0][4]) != (l_1022[2] = &l_697)) , g_1023)))) & (l_1027 != l_1027)), g_102[g_156])))))
                { 
                    int i;
                    l_1028 = &p_18;
                    if (g_102[g_156])
                        break;
                }
                else
                { 
                    p_18 = (safe_add_func_uint8_t_u_u((p_19 ^ ((g_338 = &g_335) != l_1031)), (safe_rshift_func_uint16_t_u_s(g_360, g_646))));
                    if (g_156)
                        goto lbl_859;
                }
                for (g_181 = 0; (g_181 <= 1); g_181 += 1)
                { 
                    int64_t l_1035 = 1L;
                    uint32_t **l_1052 = &l_929;
                    int32_t l_1053 = 0xE389CC22L;
                    uint64_t *l_1054 = &l_746.f1;
                    struct S0 *l_1055[7] = {&g_60,&g_60,&g_58,&g_60,&g_60,&g_58,&g_60};
                    int i, j;
                    l_1034 = g_58;
                    if (l_1035)
                        continue;
                    p_18 = (g_403 , (g_43 ^ (l_1036 , (safe_rshift_func_uint8_t_u_u(p_19, p_18)))));
                    l_1056 = (l_1044[0] = g_58);
                }
                if (p_19)
                    goto lbl_1057;
            }
            for (g_185 = 0; (g_185 <= 1); g_185 += 1)
            { 
                int32_t l_1058 = 1L;
                int16_t l_1061 = 0x26D3L;
                int32_t l_1063 = 1L;
                (*l_1028) = l_1058;
                for (g_106.f2 = 0; (g_106.f2 <= 3); g_106.f2 += 1)
                { 
                    int32_t *l_1059 = &l_908;
                    int32_t l_1060[7][5][5] = {{{0xB1B4D3DBL,0xDDC89D2AL,(-1L),0xB1B4D3DBL,0x4943D917L},{0x510425ECL,0xEC2B5E22L,0x9CF02049L,0x64151863L,0x64151863L},{0L,0x900DE3F9L,0L,0x4943D917L,0xB1B4D3DBL},{0x64151863L,(-3L),6L,0x60289B43L,0x959549B2L},{1L,0L,0x9387532DL,(-1L),(-3L)}},{{0xE53EDD5BL,(-1L),6L,0x959549B2L,(-1L)},{1L,(-2L),0L,(-8L),0x46EECE10L},{0xEC2B5E22L,(-10L),0x9CF02049L,(-10L),0xEC2B5E22L},{1L,1L,(-1L),0x46EECE10L,0x042CA121L},{0xC83E9C1EL,(-3L),0x53A24CF8L,0xC83E9C1EL,6L}},{{(-8L),0xB1B4D3DBL,0x5D77828FL,1L,0x042CA121L},{0xE53EDD5BL,0xC83E9C1EL,0x6D450892L,6L,0xEC2B5E22L},{0x042CA121L,0xDDC89D2AL,0x46EECE10L,0L,0x46EECE10L},{7L,7L,0x1229103CL,0x213A859CL,(-1L)},{0L,(-3L),(-7L),0x46EECE10L,(-3L)}},{{(-10L),0x53A24CF8L,3L,0x510425ECL,0x959549B2L},{(-1L),(-3L),0x5D77828FL,1L,0xB1B4D3DBL},{0x6D450892L,7L,(-3L),0x959549B2L,0x64151863L},{0x900DE3F9L,0xDDC89D2AL,0xDDC89D2AL,0x900DE3F9L,0x4943D917L},{(-1L),0xC83E9C1EL,0x9CF02049L,7L,0x60289B43L}},{{0L,0xB1B4D3DBL,(-1L),0x4943D917L,(-1L)},{0x60289B43L,(-3L),0xE0B95840L,7L,0xAEBF5CB0L},{1L,0L,0L,(-1L),(-7L)},{7L,0xE0B95840L,0xAEBF5CB0L,0xAEBF5CB0L,0xE0B95840L},{0x46EECE10L,0x5D77828FL,0L,0x4943D917L,1L}},{{(-3L),6L,0x60289B43L,0x959549B2L,0x53A24CF8L},{0L,1L,0x5D77828FL,1L,0L},{(-3L),0x9B00D9C7L,0x1229103CL,(-3L),0xFFD532D2L},{0x46EECE10L,(-1L),1L,1L,1L},{7L,0x2950C50FL,7L,0xFFD532D2L,(-3L)}},{{1L,5L,(-4L),0L,1L},{0xE53EDD5BL,0x6D450892L,0x64151863L,0x53A24CF8L,0x959549B2L},{(-1L),0x4943D917L,(-4L),1L,0x4943D917L},{6L,0x9CF02049L,7L,0xE0B95840L,0xAEBF5CB0L},{(-1L),(-7L),1L,(-7L),(-1L)}}};
                    int64_t l_1062 = 1L;
                    int32_t l_1064 = (-8L);
                    int i, j, k;
                    l_1059 = l_1022[(g_185 + 1)];
                    if (p_18)
                        break;
                    l_1060[6][3][1] ^= p_18;
                    g_1065[1]++;
                }
            }
            for (g_156 = 0; (g_156 < 7); g_156++)
            { 
                int32_t l_1073 = 0x28800157L;
                int32_t l_1075 = 0xEF0EDD7BL;
                int32_t l_1076 = 0L;
                int32_t l_1077[3];
                int64_t **l_1114[4];
                uint32_t l_1119 = 0xD424B4DBL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1077[i] = 0xAEAE3EDCL;
                for (i = 0; i < 4; i++)
                    l_1114[i] = &g_160;
                for (l_896 = 20; (l_896 != 16); l_896--)
                { 
                    int16_t l_1072 = 9L;
                    int32_t l_1074 = 0x338DBFE4L;
                    int32_t l_1078 = 1L;
                    int32_t l_1083 = 1L;
                    int32_t l_1084 = 0xDAC82B9EL;
                    int32_t l_1085 = 0L;
                    uint8_t l_1086 = 255UL;
                    int32_t *l_1091[1];
                    int32_t **l_1092 = &l_1091[0];
                    uint8_t *l_1095 = &l_1086;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1091[i] = &g_185;
                    ++l_1086;
                    if (p_18)
                        continue;
                    if (p_18)
                        continue;
                    l_1083 |= (l_1085 &= (p_18 ^ ((safe_div_func_uint16_t_u_u((0xF1L & ((*g_338) , ((*l_1095) &= ((((*l_1092) = l_1091[0]) == l_929) <= (g_40[1][0][0] < (safe_rshift_func_uint16_t_u_u(0x257AL, 13))))))), l_1075)) ^ 0x54040E89B34D5F1CLL)));
                }
                for (g_152 = 0; (g_152 > 34); g_152 = safe_add_func_int64_t_s_s(g_152, 1))
                { 
                    const uint32_t l_1109 = 0UL;
                    union U3 *l_1112 = &g_202[1];
                    int64_t *l_1113 = &g_133;
                    int32_t l_1116 = 0xF4A00F4EL;
                    int32_t l_1117 = 0x5E01DC76L;
                    int32_t l_1118[4][2] = {{0xEEDCCEFDL,0xAE7DED25L},{0xEEDCCEFDL,0xAE7DED25L},{0xEEDCCEFDL,0xAE7DED25L},{0xEEDCCEFDL,0xAE7DED25L}};
                    int i, j;
                    (*l_979) &= (((g_45 = g_102[3]) > (((((~((safe_sub_func_uint64_t_u_u(0x4A8DC5D4CBC0DBBCLL, ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s(((*l_1113) = ((safe_mod_func_uint32_t_u_u((p_18 , l_1109), (((**g_1024) ^= (safe_add_func_int8_t_s_s(p_19, (((*g_160) = (l_1112 != (void*)0)) , g_202[1].f3)))) | (*l_1028)))) ^ p_19)), l_1109)) , g_133), (*l_1028))), p_19)) && p_19))) & p_18)) , l_1114[2]) != l_1115) ^ g_241) | p_19)) & p_19);
                    l_1119--;
                }
            }
            l_1002 |= (((*l_930) = (((*l_1147) |= ((((l_1122 , (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((*g_1025)--), (((p_18 , p_19) , (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((*l_1146) = ((18446744073709551611UL < ((l_1135[2][0][0] == g_1137) >= (safe_add_func_uint32_t_u_u((!((((safe_lshift_func_int8_t_s_u((((g_1144 = (((*l_935) ^= ((p_19 > (*l_1028)) || p_19)) , p_21)) == &g_10) >= 4294967286UL), 2)) || (-1L)) , g_39) >= 0x4461L)), l_1145)))) >= p_18)), 5)), 2))) | g_202[1].f0))), g_202[1].f1)), 0x5B56L))) != p_18) != (*l_1028)) , g_95)) != 1L)) < (-5L));
            if (((safe_add_func_uint8_t_u_u((((*l_935)--) >= (g_335.f0 & (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((((safe_div_func_uint64_t_u_u((((l_746.f0 , &l_756) != g_1158) > 0UL), (0xE6B44955547FB71ELL ^ ((((((l_1160 , p_18) <= 0L) && 0xE1L) , p_18) <= p_19) > (*l_1028))))) ^ (*l_1028)) >= (***g_1023)) & p_18), p_18)), g_45)))), 0xFDL)) > 0x9FB3D387L))
            { 
                uint64_t ***l_1161 = &g_1024;
                int32_t l_1162 = 7L;
                uint32_t l_1163[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1163[i] = 5UL;
                if (p_19)
                { 
                    p_18 = (l_1028 != &g_204);
                    (*l_1028) |= (&g_1024 == l_1161);
                }
                else
                { 
                    l_1163[1]--;
                    return p_20;
                }
                l_1028 = &p_18;
                l_1082[1][1][1] &= (safe_add_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_mul_func_int16_t_s_s((0x5C9552CAA9ABFFF8LL | ((safe_sub_func_int64_t_s_s((((*l_979) = (l_1175 = l_1163[1])) , (safe_unary_minus_func_uint64_t_u(((((*g_1159) == (void*)0) , (((void*)0 == l_1179) != ((***g_1023) = (p_18 <= 0x49AEB69A4FD8C117LL)))) && p_19)))), p_19)) < (*g_160))), l_1162)))), p_19)) , 0x7DA96008B8C92EE1LL), (-3L)));
            }
            else
            { 
                int32_t *l_1182 = (void*)0;
                struct S0 *l_1183 = &g_58;
                (*l_979) ^= p_18;
                for (l_1004 = (-12); (l_1004 != (-20)); l_1004--)
                { 
                    struct S0 **l_1184[7] = {&l_1183,&l_1183,&l_1183,&l_1183,&l_1183,&l_1183,&l_1183};
                    int i;
                    l_1182 = &p_18;
                    l_1183 = l_1183;
                }
            }
        }
        for (g_108.f0 = 21; (g_108.f0 != 14); g_108.f0--)
        { 
            int32_t l_1187 = (-4L);
            int32_t l_1188 = 0x90AB0064L;
            int32_t l_1189 = 0L;
            int32_t l_1190 = (-10L);
            int32_t l_1191 = (-1L);
            int32_t l_1192 = 0x997C12D9L;
            int32_t l_1193 = 0x7E59BB3AL;
            int16_t l_1194 = 1L;
            int32_t l_1195 = 0x918A4231L;
            int32_t l_1196 = 0xABB6FA9CL;
            int32_t l_1197 = 0xB284AC99L;
            int32_t l_1198 = 1L;
            int32_t l_1199 = 0xCF530A5BL;
            int8_t l_1200 = (-1L);
            int32_t l_1201 = 0x78869D47L;
            int32_t l_1202 = 0L;
            int32_t l_1211 = (-9L);
            uint16_t l_1213 = 0UL;
            --g_1203;
            for (l_911 = 0; (l_911 <= 0); l_911 += 1)
            { 
                uint32_t l_1206 = 4294967295UL;
                int32_t l_1214 = 0L;
                int32_t *l_1219[6][4][1] = {{{(void*)0},{&l_1195},{&g_535},{&l_720}},{{&g_535},{&l_1195},{(void*)0},{&l_1195}},{{&g_535},{&l_720},{&g_535},{&l_1195}},{{(void*)0},{&l_1195},{&g_535},{&l_720}},{{&g_535},{&l_1195},{(void*)0},{&l_1195}},{{&g_535},{&l_720},{&g_535},{&l_1195}}};
                int i, j, k;
                if ((((**l_1179) = ((l_1206 != (safe_mod_func_uint64_t_u_u((++(**g_1024)), (l_1211 = 0x424BE85B8DF2F2CBLL)))) ^ (((*p_20) , ((void*)0 != l_1212)) < l_1213))) == (l_1214 |= (l_1193 = l_1196))))
                { 
                    union U2 *l_1218 = &g_10;
                    l_1215--;
                    return l_1218;
                }
                else
                { 
                    int i, j;
                    l_1219[5][0][0] = &p_18;
                }
                for (l_1199 = 1; (l_1199 >= 0); l_1199 -= 1)
                { 
                    uint8_t *l_1229 = &g_95;
                    p_18 = (((((0x5AA32B32AE45618ELL > (safe_unary_minus_func_int64_t_s((l_1196 <= l_1192)))) < ((void*)0 != l_1223)) , ((*l_1229) = ((safe_sub_func_uint16_t_u_u((*l_807), (safe_div_func_uint32_t_u_u(l_1228, p_19)))) <= p_19))) || g_202[1].f0) == p_19);
                }
            }
        }
        if ((((((safe_sub_func_int32_t_s_s(((((~(*g_1025)) || ((((0UL || ((l_1233 = l_1233) != &g_1024)) < ((*p_20) , ((((safe_lshift_func_uint8_t_u_u(g_335.f1, (safe_rshift_func_int16_t_s_u((((g_202[1].f4 <= (*l_807)) <= p_19) == 0xB7EB771FL), (*l_979))))) , g_184[3][2][3]) > p_18) & 255UL))) > l_1239) == (-1L))) <= p_18) || p_18), p_19)) < 7L) < (-4L)) && g_335.f1) , p_18))
        { 
            union U4 l_1240 = {0x3D8CB0072808E406LL};
            uint8_t l_1245 = 2UL;
            int32_t l_1255 = 0xDED68EE9L;
            uint16_t l_1257[1];
            int32_t *l_1258[2];
            const union U3 l_1263 = {0x06BA0065L};
            int8_t *l_1279[6][1] = {{(void*)0},{&g_46},{&g_46},{(void*)0},{&g_46},{&g_46}};
            const uint64_t **l_1286 = (void*)0;
            int32_t *** const l_1312[3] = {&g_208,&g_208,&g_208};
            struct S0 ***l_1333 = &g_1330;
            union U2 l_1349[1] = {{{0x3EAEA0B6L}}};
            uint32_t l_1351 = 0x3ED67325L;
            uint32_t l_1354 = 4294967295UL;
            union U2 ***l_1355 = &l_764[1][0][1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1257[i] = 0x1BE7L;
            for (i = 0; i < 2; i++)
                l_1258[i] = &g_43;
            l_1258[1] = (((p_18 >= (l_1240 , (((safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((l_1245 ^ g_535) < (safe_rshift_func_int16_t_s_u(((((*l_979) = (l_1255 |= (safe_mod_func_int16_t_s_s(((p_18 != ((*g_160) = ((safe_sub_func_int8_t_s_s(g_866, ((safe_add_func_uint8_t_u_u((+3L), g_202[1].f4)) >= 255UL))) >= g_1019))) & 18446744073709551607UL), p_18)))) >= 0xFE2F72B8L) | p_19), 13))), 0x69L)) || (*g_160)), 0x39L)) && l_1256) || g_335.f1))) <= l_1257[0]) , &p_18);
            if (p_18)
            { 
                int32_t ****l_1272 = (void*)0;
                int8_t *l_1281 = &g_40[1][1][6];
                const uint64_t **l_1288 = (void*)0;
                int32_t l_1315 = 4L;
                struct S0 *l_1328 = &l_1044[0];
                struct S0 **l_1327 = &l_1328;
                struct S0 ***l_1326 = &l_1327;
                for (l_907 = 0; (l_907 != 27); l_907 = safe_add_func_uint32_t_u_u(l_907, 1))
                { 
                    int32_t ****l_1271[2];
                    int8_t **l_1280 = &l_1223;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1271[i] = &g_207[5][0];
                    (*l_979) &= ((safe_lshift_func_uint16_t_u_u((l_1263 , (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_18, 4)), p_19))), (&g_95 != &l_1245))) ^ 1L);
                    (*l_979) |= (safe_sub_func_uint16_t_u_u(((p_18 >= ((+(l_1271[1] != (l_1272 = &g_207[6][0]))) , (safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(((((*l_1280) = l_1279[0][0]) != &g_40[2][1][6]) != ((g_1282 = l_1281) != ((((~(((6UL > p_19) <= 1UL) < p_19)) , g_108.f4) , 3L) , (void*)0))), p_19)), (*g_160))), 0)))) > 0x2288D089L), g_866));
                    l_1258[1] = &p_18;
                    return &g_10;
                }
                for (g_58.f0 = 0; (g_58.f0 <= 1); g_58.f0 += 1)
                { 
                    const uint64_t ***l_1287 = &l_1286;
                    uint64_t * const l_1291[1] = {(void*)0};
                    uint64_t * const *l_1290 = &l_1291[0];
                    uint64_t * const **l_1289 = &l_1290;
                    int32_t l_1313 = (-1L);
                    int64_t *l_1314 = &l_1256;
                    struct S0 ****l_1332 = &l_1326;
                    int16_t *l_1345 = &g_45;
                    int32_t l_1346[3];
                    uint8_t *l_1347 = &l_1122.f3;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1346[i] = 0x5F49CF7EL;
                    l_1315 ^= (safe_div_func_uint64_t_u_u(((((l_1288 = ((*p_21) , ((*l_1287) = l_1286))) == ((*l_1289) = (*g_1023))) >= ((*l_1314) = ((**l_1179) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(0xB87E78BBE8BC94BCLL, (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0xB6L, 4)), (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((l_1312[2] == l_1312[1]), l_1313)), p_19)), 11)))), g_152)) , (*l_807)), p_19)))) > g_202[1].f3) < p_19), 7)), g_1203))))) <= p_19), 0x5B978E76D2BFA350LL));
                    (*l_807) = ((safe_lshift_func_int8_t_s_u((p_19 , (safe_div_func_int16_t_s_s(g_226.f0, 0x37C5L))), 0)) < (*l_979));
                    g_1348 &= (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((*l_807), 12)) < (safe_mul_func_int8_t_s_s((((*l_1347) = ((p_19 &= (((((*l_1332) = (g_1329 = l_1326)) != (l_1333 = &g_1330)) != (+(l_1346[2] ^= (safe_mul_func_uint16_t_u_u(((*l_935) = (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((*l_1345) &= (safe_div_func_uint8_t_u_u(0xF9L, (safe_sub_func_uint64_t_u_u(p_18, 0xEA3B820B8546F2C2LL))))), 4)), 0)) && p_18) || l_1313)), p_18))))) >= p_18)) <= p_18)) , 0x10L), p_18))) != g_202[1].f4) & p_18), l_1313));
                    (***l_1326) = (***g_1329);
                }
            }
            else
            { 
                int32_t *l_1350 = &l_720;
                l_1350 = (l_1349[0] , &p_18);
            }
            --l_1351;
            (*l_979) = l_1354;
            (*l_1355) = &p_20;
        }
        else
        { 
            union U3 *l_1358[3][3][3];
            int32_t l_1361 = 3L;
            uint16_t l_1393 = 0x73BCL;
            int32_t l_1399 = 0x17A73C85L;
            int32_t l_1401 = 0x00591076L;
            int32_t l_1402[3][2][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
            uint8_t l_1406 = 0xA8L;
            uint8_t l_1410 = 0x46L;
            union U2 l_1417[7] = {{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}},{{0L}}};
            union U3 *** const ** const l_1418 = &l_1381;
            int32_t *l_1423 = &l_1402[0][0][2];
            union U2 **l_1429[5];
            uint8_t l_1438 = 0UL;
            uint8_t *l_1457 = &g_1357[1][0].f3;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_1358[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 5; i++)
                l_1429[i] = &g_9;
            if (((((l_1356 = &l_1122) != l_1358[2][0][1]) && (safe_div_func_uint16_t_u_u((((-5L) ^ 0xABL) ^ (1L && (l_1361 , ((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_935) &= 0x1E4DL), g_47)), (*g_1282))) | 5UL), p_18)) || p_18)))), p_19))) <= p_19))
            { 
                union U3 *****l_1376 = &g_797[0];
                union U3 **l_1380 = &g_283[4][1];
                union U3 *** const l_1379[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                union U3 *** const *l_1378 = &l_1379[3];
                union U3 *** const **l_1377[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1396 = 0x13F7978CL;
                int32_t l_1403 = (-7L);
                int32_t l_1404 = 0x529102B7L;
                int32_t l_1405 = 0x39573012L;
                union U1 *l_1422 = (void*)0;
                struct S0 l_1432 = {0x98805AB3L};
                int i;
                if ((p_18 = (g_153 , ((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((((p_19 , (safe_sub_func_int16_t_s_s((((*l_1376) = &g_798) == (l_1381 = &g_798)), l_1361))) < l_1393) & (safe_div_func_uint64_t_u_u(0xDE13456928BA8404LL, 0x675A303B80D6F950LL))) & l_1393) & (*g_1282)), l_1396)), l_1396)), p_19)) < g_335.f0))))
                { 
                    p_18 = p_19;
                    (*l_807) ^= ((void*)0 == &l_1396);
                }
                else
                { 
                    int16_t l_1397 = 0xA0DEL;
                    int32_t l_1398 = 0xFC35AEF0L;
                    int32_t l_1400[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int32_t *l_1409 = &l_1404;
                    union U3 *l_1413 = &g_1357[1][0];
                    union U2 l_1416 = {{0x4D41A019L}};
                    struct S0 *l_1419 = &g_60;
                    int i;
                    l_1406++;
                    l_1409 = &l_1403;
                    l_1410--;
                    (*l_1389) = l_1413;
                    (*l_1419) = ((safe_rshift_func_uint16_t_u_u((((*p_21) = ((l_1417[2] = l_1416) , (*p_20))) , (l_1418 != &l_1378)), 5)) , l_1417[2].f0);
                }
                for (g_108.f3 = 29; (g_108.f3 >= 13); --g_108.f3)
                { 
                    union U3 ***l_1430[5];
                    int32_t l_1431 = 0L;
                    const struct S0 l_1433 = {0xADD3FFC9L};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1430[i] = &g_282[1];
                    l_1422 = &l_1160;
                    l_1423 = (void*)0;
                    l_1044[0] = ((((safe_sub_func_uint64_t_u_u((*g_1025), (l_1431 = (((*l_979) > ((safe_rshift_func_int16_t_s_s(((l_746.f0 , l_1428) == l_1429[4]), (l_1430[1] != ((*p_21) , (void*)0)))) | p_19)) <= (*g_1282))))) >= 0x687C0151L) , p_18) , l_1432);
                    l_1044[4] = l_1433;
                    if (l_1393)
                        break;
                }
            }
            else
            { 
                int32_t *l_1445[3][4] = {{&l_710,&l_1004,&l_1004,&l_710},{&g_535,&l_1004,&l_1004,&l_1004},{&l_1004,&l_1402[0][0][3],&l_1004,&l_1004}};
                union U2 *l_1446 = &l_1417[2];
                int i, j;
                l_1434++;
                if (((*l_807) |= (safe_unary_minus_func_int32_t_s(l_1438))))
                { 
                    struct S0 *l_1439 = (void*)0;
                    struct S0 *l_1440 = &l_1044[0];
                    struct S0 *l_1443 = &g_10.f0;
                    (*l_1443) = (l_1442 = (l_1441 = ((*l_1440) = l_746.f0)));
                }
                else
                { 
                    int32_t *l_1444 = &l_1004;
                    l_1445[0][0] = l_1444;
                    (*l_807) = ((void*)0 != &l_746);
                    (*l_1444) |= (*l_1423);
                    return &g_10;
                }
            }
            l_1402[2][0][2] &= ((safe_rshift_func_int8_t_s_u((~p_19), 7)) & ((*l_1457) = ((((**l_1179) = ((g_1203 &= (((*l_807) = (safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((*l_1223) = ((((0x58L < g_46) ^ 0x1D64L) & (255UL || (safe_mul_func_int16_t_s_s(((((g_335.f0 = (g_842 ^= ((***l_1233) = (0xFAL != p_18)))) > p_19) , p_18) && 0x8CF389386F8F5C10LL), 0L)))) <= p_19)), 0x4FL)) != g_156), p_19))) == p_19)) > 0L)) > l_1456) == p_19)));
            return p_21;
        }
        if ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((((safe_div_func_int8_t_s_s(((*g_1282) ^= (6L || (--(*l_1464)))), (p_19 , (safe_rshift_func_int8_t_s_s((((g_102[3] <= ((*l_935) &= l_1469[0])) == ((*g_338) , (p_19 >= ((*l_1223) = (safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_18, (*l_807))) || p_19), 0x92L)))))) >= 0x19L), 3))))) != l_1474) && p_18) , 255UL), (*l_807))), p_18)))
        { 
            for (p_19 = 0; (p_19 != (-13)); p_19 = safe_sub_func_uint64_t_u_u(p_19, 1))
            { 
                struct S0 ** const l_1479 = &g_1331;
                for (g_156 = 13; (g_156 <= 43); ++g_156)
                { 
                    return (*l_1428);
                }
                p_18 ^= ((g_1330 = &g_1331) != l_1479);
            }
        }
        else
        { 
            union U2 l_1485 = {{5L}};
            int32_t * const l_1486 = &l_1001;
            union U2 ***l_1495 = &l_764[1][1][4];
            int32_t *l_1497 = &l_1001;
            union U3 l_1509 = {-4L};
            union U4 l_1517 = {0x6138D0C0A9624B1CLL};
            union U2 *l_1520 = &l_1485;
            uint64_t **l_1535 = &g_1025;
            for (g_152 = 15; (g_152 <= 42); g_152++)
            { 
                uint32_t l_1484 = 0x79AEE08EL;
                int32_t **l_1487 = &l_807;
                (*l_979) = (safe_mul_func_uint16_t_u_u(g_39, (l_1484 != (*g_1282))));
                (*l_1487) = (((*p_21) = l_1485) , l_1486);
                for (p_19 = 21; (p_19 == 2); p_19 = safe_sub_func_uint64_t_u_u(p_19, 5))
                { 
                    struct S0 l_1490 = {0x92FA069AL};
                    struct S0 *l_1491 = &l_1044[2];
                    int32_t *l_1492 = &l_1001;
                    (*l_1491) = l_1490;
                    l_1492 = ((*p_21) , (void*)0);
                    l_1441 = l_1485.f0;
                    (**l_1487) &= (-7L);
                }
                for (g_133 = 19; (g_133 < (-16)); g_133 = safe_sub_func_int8_t_s_s(g_133, 3))
                { 
                    union U2 ****l_1496 = &l_1495;
                    (*l_1496) = l_1495;
                }
            }
            l_1497 = &p_18;
            for (l_974.f1 = 0; (l_974.f1 <= 3); l_974.f1 += 1)
            { 
                union U1 l_1500 = {{1L}};
                if ((safe_sub_func_int32_t_s_s((l_1500 , (p_18 > (safe_mod_func_int64_t_s_s((~((void*)0 != l_804)), (safe_lshift_func_int8_t_s_u(((*p_20) , 0x1DL), 4)))))), ((((((l_1500.f0.f0 , (***g_1158)) == (**g_1159)) == l_1506) >= 0xC4AE55E5L) , l_1500.f0.f0) , p_19))))
                { 
                    uint32_t l_1507 = 0x07C32B4EL;
                    if (l_1507)
                        break;
                }
                else
                { 
                    union U4 **l_1508 = &l_1031;
                    (*l_1497) = 0x91573306L;
                    if (p_19)
                        break;
                    if (p_19)
                        break;
                    (*l_1508) = &g_335;
                }
                if (p_18)
                    break;
                for (l_1256 = 3; (l_1256 >= 0); l_1256 -= 1)
                { 
                    struct S0 **l_1513 = &g_1331;
                    struct S0 ***l_1514 = &l_1513;
                    struct S0 * const **l_1516[3][5] = {{(void*)0,&l_1515,&l_1515,(void*)0,&l_1515},{&l_1515,&l_1515,&l_1515,&l_1515,&l_1515},{&l_1515,(void*)0,&l_1515,&l_1515,(void*)0}};
                    int i, j;
                    (*l_1497) = (((l_1509 , g_1510[1]) == (void*)0) , (1UL && (*g_1025)));
                    (*l_1486) |= (p_18 = p_18);
                    if (l_1500.f0.f0)
                        continue;
                    (*l_1486) |= (((*l_1514) = l_1513) == (l_1515 = l_1515));
                    g_226 = l_1160.f0;
                }
                return (*l_1428);
            }
            (*l_979) ^= (l_1517 , (safe_mod_func_uint16_t_u_u((l_1485.f0 , g_1348), (*l_1497))));
        }
        if (((g_1065[2] == (safe_add_func_int16_t_s_s(p_19, 0xD493L))) , p_18))
        { 
            int8_t *l_1548[5][7][5] = {{{&g_1549,&g_1549,&g_1549,&g_1549,&g_40[1][1][6]},{&g_40[2][0][0],&g_1549,&g_1549,&g_40[1][1][6],&g_1549},{(void*)0,&g_1549,&g_40[1][1][6],&g_1549,&g_40[2][0][0]},{&g_1549,&g_40[0][0][0],&g_40[1][1][6],&g_40[1][1][6],&g_1549},{&g_40[1][1][6],&g_40[1][1][6],(void*)0,&g_1549,&g_40[1][1][6]},{&g_40[1][1][6],&g_1549,(void*)0,&g_40[0][0][0],&g_1549},{&g_1549,&g_40[1][1][6],(void*)0,(void*)0,(void*)0}},{{&g_1549,&g_1549,(void*)0,&g_40[1][1][6],&g_1549},{&g_1549,&g_1549,&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6]},{&g_40[1][1][6],&g_1549,&g_40[1][1][6],(void*)0,&g_40[1][1][6]},{&g_40[1][1][6],&g_1549,&g_1549,&g_40[1][1][6],&g_40[1][1][6]},{&g_40[1][1][6],&g_1549,&g_1549,&g_40[1][1][6],&g_40[1][1][6]},{&g_40[2][0][0],&g_40[1][1][6],&g_1549,&g_40[1][1][6],&g_40[0][0][4]},{&g_40[2][0][0],&g_1549,&g_40[0][0][5],&g_1549,&g_40[2][0][0]}},{{&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6],&g_1549},{&g_40[1][1][6],&g_40[0][0][0],&g_40[1][1][6],&g_1549,&g_40[0][0][0]},{&g_40[1][1][6],&g_1549,&g_40[1][1][6],&g_40[1][1][6],&g_1549},{&g_1549,&g_1549,(void*)0,&g_40[1][1][6],&g_40[2][0][0]},{&g_1549,&g_1549,&g_40[1][1][6],&g_40[1][1][6],&g_40[0][0][4]},{&g_1549,&g_1549,(void*)0,&g_40[1][1][6],&g_40[1][1][6]},{&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6]}},{{&g_40[1][1][6],&g_40[0][0][4],&g_1549,&g_40[1][1][6],&g_40[1][1][6]},{&g_1549,&g_1549,&g_40[1][1][0],&g_1549,&g_40[1][1][6]},{(void*)0,&g_1549,&g_1549,&g_40[1][1][6],&g_1549},{&g_40[2][0][0],&g_1549,&g_40[1][1][6],&g_1549,(void*)0},{&g_1549,&g_40[1][1][6],(void*)0,&g_40[1][1][6],&g_1549},{&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6]},{&g_40[1][1][6],&g_1549,(void*)0,&g_40[1][1][6],&g_1549}},{{&g_1549,&g_1549,&g_40[1][1][6],(void*)0,&g_40[2][0][0]},{&g_1549,&g_1549,&g_40[1][1][6],&g_40[1][1][6],&g_1549},{&g_1549,&g_40[0][0][4],&g_40[1][1][6],&g_40[1][1][6],&g_40[1][1][6]},{&g_40[1][1][6],&g_40[1][1][6],&g_40[0][0][5],(void*)0,&g_40[1][1][6]},{&g_40[1][1][6],&g_1549,&g_1549,&g_40[0][0][0],&g_40[1][1][6]},{&g_1549,&g_1549,&g_1549,&g_1549,&g_40[1][1][6]},{&g_40[2][0][0],&g_1549,&g_1549,&g_40[1][1][6],&g_1549}}};
            int32_t l_1550 = (-9L);
            const int32_t l_1551[6][2] = {{0x412C8F9CL,0x412C8F9CL},{0x412C8F9CL,0x412C8F9CL},{0x412C8F9CL,0x412C8F9CL},{0x412C8F9CL,0x412C8F9CL},{0x412C8F9CL,0x412C8F9CL},{0x412C8F9CL,0x412C8F9CL}};
            int32_t *l_1553 = &g_535;
            union U2 **l_1562 = &g_1144;
            int i, j, k;
            l_1553 = (((*g_338) , ((-2L) | ((*g_1282) < (safe_add_func_int64_t_s_s(((**l_1179) = (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(p_19, 18446744073709551609UL)), (safe_mod_func_uint64_t_u_u((((((((l_1550 ^= ((g_1547[0][0][0] >= (((((((*l_1223) ^= (*g_1282)) >= g_204) == p_18) != (*l_979)) != (*l_979)) , 4294967295UL)) , 0x4AL)) , 0x96D51C888D8D4843LL) >= l_1551[2][1]) ^ 1L) != 0x2AA9L) & g_858) || g_1552[2][0]), 2L))))))), (*g_1025)))))) , &p_18);
            for (g_43 = (-2); (g_43 != (-7)); --g_43)
            { 
                for (g_98 = 0; g_98 < 3; g_98 += 1)
                {
                    for (g_403.f1 = 0; g_403.f1 < 1; g_403.f1 += 1)
                    {
                        g_1552[g_98][g_403.f1] = 4L;
                    }
                }
            }
            g_1567 &= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_18, ((l_1562 = l_1562) == (void*)0))), ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint16_t_u_u((((*l_1464) ^= g_133) & (&l_1428 != &l_764[1][1][4])), 0xADA8L)) & 4294967295UL), g_46)) < 0x461BL))), 14));
            (*l_979) ^= 0xB3E11C34L;
            g_1582 &= (((*g_338) , ((*g_1025) &= p_18)) == ((safe_add_func_int32_t_s_s((!((((safe_lshift_func_uint8_t_u_s(p_18, p_19)) < 0x7836L) != ((*l_929) ^= 0xAEC43A0BL)) | (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((0x84L & (-1L)), (*l_1553))), l_1581[1])), p_19)), 0x0E68L)))), p_18)) <= (*l_1553)));
        }
        else
        { 
            uint32_t l_1587 = 0xD666BD45L;
            int32_t *l_1593 = (void*)0;
            int32_t l_1595[1][7][4] = {{{0x6C98ED0DL,0x654C20B1L,0x92908F14L,0L},{0x07C3159CL,(-10L),0x1F3215D2L,0x32BF4FFEL},{0x92908F14L,0x6C98ED0DL,(-1L),(-1L)},{0x92908F14L,0x92908F14L,0x1F3215D2L,(-5L)},{0x07C3159CL,(-1L),0x92908F14L,(-10L)},{0x6C98ED0DL,(-2L),3L,0x92908F14L},{0L,(-2L),0L,(-10L)}}};
            uint8_t *l_1611 = &l_1581[1];
            union U3 l_1646 = {-1L};
            uint8_t l_1692 = 0UL;
            int i, j, k;
lbl_1690:
            for (l_1506 = 6; (l_1506 != 27); l_1506 = safe_add_func_int8_t_s_s(l_1506, 7))
            { 
                union U2 *l_1592 = &g_10;
                int32_t *l_1594 = &l_909;
                int32_t l_1596[6][3] = {{0x460D13A1L,0x460D13A1L,0x460D13A1L},{0xDE986E0CL,0xDE986E0CL,0xDE986E0CL},{0x460D13A1L,0x460D13A1L,0x460D13A1L},{0xDE986E0CL,0xDE986E0CL,0xDE986E0CL},{0x460D13A1L,0x460D13A1L,0x460D13A1L},{0xDE986E0CL,0xDE986E0CL,0xDE986E0CL}};
                struct S0 l_1604 = {-1L};
                uint8_t *l_1609[5] = {&l_1122.f3,&l_1122.f3,&l_1122.f3,&l_1122.f3,&l_1122.f3};
                uint8_t **l_1610[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1610[i] = (void*)0;
                for (p_19 = 0; (p_19 >= 8); ++p_19)
                { 
                    p_18 = 0L;
                    l_1587--;
                }
                for (g_241 = 0; (g_241 < 16); g_241++)
                { 
                    return l_1592;
                }
                l_1594 = l_1593;
                for (g_47 = 0; (g_47 <= 0); g_47 += 1)
                { 
                    int32_t l_1597 = 0x30418C06L;
                    int32_t l_1598 = 0xC00D2E01L;
                    uint16_t l_1599 = 65535UL;
                    int i, j;
                    l_1599++;
                    (*l_979) = (l_1595[0][1][2] = (safe_div_func_uint8_t_u_u((g_1552[(g_47 + 2)][g_47] , (l_1596[0][2] || (l_1604 , (p_18 > (safe_lshift_func_uint16_t_u_u(g_184[1][1][3], 5)))))), (safe_mod_func_int8_t_s_s((&l_1594 == &l_1593), p_19)))));
                    l_1594 = &p_18;
                }
                (*l_807) &= (l_1609[4] == (l_1611 = &g_95));
            }
            for (g_153 = 1; (g_153 >= 0); g_153 -= 1)
            { 
                uint32_t ***l_1619 = &g_1617;
                int32_t l_1629 = (-1L);
                union U2 *l_1660 = &g_10;
                int32_t l_1663[5];
                int32_t *l_1689 = &l_1001;
                int i;
                for (i = 0; i < 5; i++)
                    l_1663[i] = 3L;
                if (((((*g_1025) <= ((~(((*g_160) >= (safe_mul_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((((*l_807) = p_18) >= p_19), ((&g_1018 != ((*l_1619) = g_1617)) <= ((safe_mod_func_uint32_t_u_u(((((((*l_935) ^= (((((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(p_19, 0x4475L)) == l_1628[2]) || l_1629), 0xA55B3A65L)), g_535)) || (*g_1282)) || (-1L)) , 0xC2L) <= (-1L))) >= p_19) || p_19) == p_19) == g_866), l_1629)) , 0xE1D3L)))) == (*g_1618)) != p_19), l_1629))) != (-1L))) , 0xFA6027D5E176D824LL)) | p_19) , p_19))
                { 
                    uint8_t l_1630 = 255UL;
                    uint64_t **l_1643 = &g_1025;
                    int16_t *l_1644 = &l_1228;
                    int16_t *l_1645 = &l_1642;
                    uint8_t **l_1657 = &l_1611;
                    int16_t *l_1658 = &g_45;
                    int16_t *l_1659[4][7][3] = {{{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98}},{{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474}},{{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98}},{{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474},{&g_98,&l_1474,&g_98},{&l_1474,&g_646,&l_1474}}};
                    int i, j, k;
                    l_1630--;
                    p_18 ^= (safe_sub_func_int32_t_s_s(l_1630, l_1635));
                    if (p_18)
                        continue;
                    l_1629 = ((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((*l_1645) = (((*l_935) = l_1642) || ((*l_1644) = ((void*)0 != l_1643)))), (l_1646 , (safe_rshift_func_uint16_t_u_s(1UL, ((((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_646 ^= ((*l_1658) = (safe_add_func_int32_t_s_s(((((((*g_1282) |= p_19) , ((*l_979) | g_204)) , l_1657) != (void*)0) & p_18), 0x09C50339L)))) < 0x6477L), 255UL)), 7L)), 1)) != l_1629) == l_1630) && (***g_1023))))))) == (*g_160)), g_226.f0)), 6UL)) , 0x72D1006BL);
                    (*l_979) &= p_18;
                }
                else
                { 
                    return l_1660;
                }
                for (l_1122.f0 = 3; (l_1122.f0 >= 0); l_1122.f0 -= 1)
                { 
                    int32_t l_1662[6] = {0L,4L,0L,0L,4L,0L};
                    int i;
                    if (g_102[(g_153 + 2)])
                        break;
                    (*l_979) = p_18;
                    g_1664--;
                    (*l_807) = (safe_sub_func_int64_t_s_s(8L, (safe_mod_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(246UL, ((safe_lshift_func_uint8_t_u_u(p_19, (1L ^ ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((*g_160) >= (safe_mul_func_int16_t_s_s((p_18 && (0x1A6EFF0F829385B7LL != p_18)), g_181))), p_19)) & p_18), 2)) | l_1663[3])))) > p_18))), l_1663[0])) , l_1685) , l_1686), (*g_160)))));
                    if (p_19)
                        break;
                }
                if (l_1663[3])
                { 
                    const uint64_t * const **l_1688[6][6][1] = {{{&l_860},{&l_860},{&l_860},{&l_860},{&l_860},{&l_860}},{{&l_860},{&l_860},{&l_860},{&l_860},{&l_860},{&l_860}},{{&l_860},{&l_860},{&l_860},{&l_860},{&l_860},{&l_860}},{{&l_860},{&l_860},{&l_860},{&l_860},{&l_860},{&l_860}},{{&l_860},{&l_860},{&l_860},{&l_860},{&l_860},{&l_860}},{{&l_860},{&l_860},{&l_860},{&l_860},{&l_860},{&l_860}}};
                    const uint64_t * const ***l_1687 = &l_1688[2][4][0];
                    int i, j, k;
                    (*l_979) = 7L;
                    (*l_1687) = &l_860;
                    l_1689 = &p_18;
                }
                else
                { 
                    uint8_t **l_1697 = &l_1464;
                    uint8_t **l_1698[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1698[i] = (void*)0;
                    if (l_1160.f0.f0)
                        goto lbl_1690;
                    (*l_1689) |= (&g_95 == (l_1699 = ((*l_1697) = ((((l_1691 != p_18) | l_1692) == (safe_rshift_func_int16_t_s_u((g_47 == (safe_lshift_func_uint8_t_u_s((p_19 > (*l_979)), 7))), p_19))) , &g_95))));
                }
                if (p_18)
                    continue;
                if (p_19)
                    continue;
                for (g_335.f0 = 0; (g_335.f0 <= 1); g_335.f0 += 1)
                { 
                    uint32_t l_1700 = 0x16400264L;
                    l_1700++;
                    if (l_1700)
                        continue;
                }
            }
        }
    }
    else
    { 
        uint8_t l_1714[6][3][7] = {{{0x99L,0xE1L,0xB1L,0UL,1UL,0xE3L,0x4BL},{0x40L,0x99L,255UL,0x26L,0x2CL,249UL,255UL},{0x4BL,1UL,0x2CL,0x2CL,1UL,0x4BL,255UL}},{{0x4BL,0x40L,0xE3L,0x99L,0x93L,0x4DL,3UL},{0x40L,255UL,3UL,0x44L,0xEBL,0x6DL,0x93L},{0xEBL,0x40L,0x26L,0xE1L,0xE1L,0x26L,0x40L}},{{1UL,1UL,0x26L,0x6DL,1UL,0xE1L,0xE3L},{0UL,0x99L,3UL,249UL,1UL,0xB1L,0x44L},{0x26L,249UL,0xE3L,0x6DL,3UL,3UL,0x6DL}},{{0x2CL,0x44L,0x2CL,0xE1L,3UL,0xEBL,1UL},{0x99L,0xB1L,255UL,0x44L,1UL,1UL,0x4DL},{0x44L,255UL,0xB1L,0x99L,1UL,0xEBL,0xEBL}},{{0xE1L,0x2CL,0x44L,0x2CL,0xE1L,3UL,0xEBL},{0x6DL,0xE3L,249UL,0x26L,0xEBL,0xB1L,0x4DL},{249UL,3UL,0x99L,0UL,0x93L,0xE1L,1UL}},{{0x6DL,0x26L,1UL,1UL,1UL,0x26L,0x6DL},{0xE1L,0x26L,0x40L,0xEBL,0x2CL,0x6DL,0x44L},{0x44L,3UL,255UL,0x40L,1UL,0x4DL,0xE3L}}};
        uint64_t ****l_1721[7][3][4] = {{{(void*)0,&g_1023,&g_1023,(void*)0},{&g_1023,&l_1233,&l_1233,&l_1233},{&l_1233,&l_1233,&g_1023,&l_1233}},{{&g_1023,&g_1023,&g_1023,&g_1023},{&l_1233,&l_1233,&g_1023,&g_1023},{(void*)0,(void*)0,(void*)0,&g_1023}},{{&l_1233,(void*)0,&g_1023,&l_1233},{(void*)0,&l_1233,&g_1023,&g_1023},{&l_1233,&l_1233,&g_1023,&l_1233}},{{&l_1233,(void*)0,&g_1023,&g_1023},{&g_1023,(void*)0,&l_1233,&g_1023},{&g_1023,&l_1233,&l_1233,&g_1023}},{{(void*)0,&g_1023,(void*)0,&l_1233},{&g_1023,&l_1233,(void*)0,&l_1233},{&g_1023,&l_1233,&g_1023,(void*)0}},{{&l_1233,&g_1023,&l_1233,&g_1023},{&l_1233,(void*)0,(void*)0,&l_1233},{&g_1023,&l_1233,&l_1233,(void*)0}},{{&l_1233,&l_1233,&g_1023,&g_1023},{&l_1233,&g_1023,&g_1023,&l_1233},{&g_1023,&l_1233,(void*)0,&l_1233}}};
        union U2 *l_1734 = &g_10;
        union U3 * const **l_1739 = (void*)0;
        union U2 *l_1753 = &g_10;
        int32_t l_1754 = 0xC4D26D9EL;
        union U4 l_1789[1] = {{0x54E7B32F97043090LL}};
        int64_t ** const l_1790 = &g_160;
        uint16_t l_1817 = 5UL;
        int8_t *l_1822 = &l_1785;
        uint32_t ***l_1848 = &g_1617;
        uint32_t ***l_1850 = (void*)0;
        const struct S0 l_1862 = {0L};
        struct S0 l_1863 = {-4L};
        int i, j, k;
        for (g_106.f0 = 0; (g_106.f0 <= (-16)); g_106.f0 = safe_sub_func_int8_t_s_s(g_106.f0, 9))
        { 
            uint32_t l_1713 = 18446744073709551607UL;
            uint64_t ****l_1733 = &g_1023;
            uint32_t l_1770[4];
            struct S0 l_1774 = {-1L};
            int32_t l_1780 = 0xF28844FAL;
            int32_t l_1782 = 0xAD39B80CL;
            int32_t l_1784 = 0x8452AF26L;
            uint8_t l_1793 = 0xFAL;
            union U2 *l_1815 = &g_10;
            int i;
            for (i = 0; i < 4; i++)
                l_1770[i] = 0xCB9236D6L;
            for (g_10.f1 = 0; (g_10.f1 > 3); g_10.f1++)
            { 
                uint32_t l_1717 = 0xB179CFCAL;
                for (l_1441.f0 = (-12); (l_1441.f0 == 22); ++l_1441.f0)
                { 
                    if (l_974.f0)
                        goto lbl_1709;
                }
                if ((safe_div_func_uint64_t_u_u(((+(*g_1282)) != (-5L)), l_1713)))
                { 
                    p_18 = (((l_1714[1][1][0] > p_18) & 0xF691L) < ((safe_div_func_int8_t_s_s(l_1714[1][1][0], ((*l_1699) = 252UL))) , l_1717));
                }
                else
                { 
                    union U2 *l_1718 = &g_10;
                    return l_1718;
                }
                (*l_807) = (safe_rshift_func_uint8_t_u_u((g_95 |= l_1713), (l_1721[1][2][3] == ((((((safe_mul_func_uint8_t_u_u(((p_18 || (safe_div_func_uint32_t_u_u(((g_1726[3] , ((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(p_18, p_18)) > ((p_19 & l_1714[1][1][0]) , 9UL)) , l_1717) ^ p_18), l_1717)), g_40[1][1][5])) || 0x5A9AL)) >= 0UL), p_19))) != l_1713), (*g_1282))) | 18446744073709551611UL) && 0x7C99L) , (void*)0) == (*l_804)) , l_1733))));
                return l_1734;
            }
            for (g_95 = 25; (g_95 < 30); g_95++)
            { 
                if (p_19)
                    break;
            }
            for (g_133 = (-25); (g_133 < 8); g_133++)
            { 
                union U3 l_1744 = {1L};
                for (g_646 = 0; (g_646 <= 1); g_646 += 1)
                { 
                    union U3 * const ***l_1740 = &l_1739;
                    (*l_1740) = l_1739;
                    if (p_19)
                        break;
                }
                (*l_807) = (safe_add_func_uint64_t_u_u((!(l_1744 , ((l_1744.f3 >= (**g_1617)) >= (safe_mul_func_int8_t_s_s((l_1714[1][1][0] >= l_1744.f4), (!((safe_mul_func_uint16_t_u_u(((l_1713 | 0x5218L) > l_1714[1][1][0]), p_18)) | p_18))))))), p_19));
            }
            p_18 |= (safe_rshift_func_uint16_t_u_s(((void*)0 != l_1752), 8));
            if (p_19)
            { 
                return l_1753;
            }
            else
            { 
                uint8_t l_1771 = 0xFDL;
                int64_t **l_1772 = &g_160;
                int32_t l_1773 = (-10L);
                const uint64_t *l_1776 = &g_1777;
                const uint64_t **l_1775[4][2][4] = {{{(void*)0,(void*)0,&l_1776,(void*)0},{(void*)0,&l_1776,&l_1776,(void*)0}},{{&l_1776,(void*)0,&l_1776,&l_1776},{(void*)0,(void*)0,&l_1776,(void*)0}},{{(void*)0,&l_1776,&l_1776,(void*)0},{&l_1776,(void*)0,&l_1776,&l_1776}},{{(void*)0,(void*)0,&l_1776,(void*)0},{(void*)0,&l_1776,&l_1776,(void*)0}}};
                uint64_t *l_1779 = &l_974.f0;
                const int32_t l_1813 = 2L;
                union U2 *l_1814 = &g_10;
                int32_t **l_1816 = (void*)0;
                int i, j, k;
                (*l_807) = p_19;
                l_1773 ^= (l_1754 && (((((((safe_add_func_uint64_t_u_u((((*g_1282) = ((safe_mod_func_int16_t_s_s(((l_1759 | 0xC64B9BB1L) , (safe_sub_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((((*l_979) = ((p_19 ^ ((*g_1025) = 4UL)) >= (safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((p_19 > (safe_lshift_func_uint16_t_u_u(0xAB3CL, p_19))), l_1713)) ^ l_1770[1]), p_19)))) , l_1714[1][1][0]) <= p_19), 0xC2EAE4DAL)) , p_19), 0xC5CE5C5BL))), l_1771)) , p_18)) <= g_335.f1), l_1713)) , (*g_338)) , l_1772) != &g_160) == 0x7145L) != l_1770[1]) , l_1770[1]));
                if (p_18)
                    break;
                if ((p_18 < ((l_1774 , (g_1778 = (p_18 , (*g_1024)))) == (l_1779 = (*g_1024)))))
                { 
                    int8_t l_1781 = (-1L);
                    int32_t l_1783 = 0L;
                    const int32_t *l_1791 = &g_43;
                    l_1786--;
                    l_1791 = (l_1789[0] , ((((*l_1136) |= p_19) , l_1781) , (((((*g_1282) >= ((void*)0 == l_1790)) & ((g_1567 < l_1783) , l_1781)) != l_1713) , (void*)0)));
                    l_1793--;
                    (*l_979) ^= (l_1782 &= l_1773);
                    if (g_95)
                        goto lbl_915;
                }
                else
                { 
                    int16_t l_1804 = 0L;
                    int16_t *l_1805 = &g_98;
                    int16_t *l_1806[7] = {&g_646,&g_646,&g_646,&g_646,&g_646,&g_646,&g_646};
                    int i;
                    (*l_979) = ((((+((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((l_1771 ^ (-8L)), ((safe_div_func_int64_t_s_s(((!((((*l_1805) &= l_1804) != (l_1773 = 0xB3D5L)) <= g_1019)) < (safe_mod_func_int16_t_s_s((p_18 == ((((safe_add_func_int32_t_s_s(((safe_div_func_int64_t_s_s((-1L), (***g_1023))) != 4294967287UL), p_19)) < 1UL) , p_19) != l_1813)), 9L))), l_1789[0].f0)) && p_18))), l_1774.f0)) | p_18)) ^ 0L) != p_19) < l_1793);
                    l_1815 = l_1814;
                    (*l_979) |= l_1813;
                }
                for (p_19 = 0; (p_19 <= 0); p_19 += 1)
                { 
                    if (p_18)
                        break;
                    (*l_807) = ((*l_1815) , (((***g_1158) = (void*)0) != l_1816));
                    if (l_1817)
                        continue;
                    return p_20;
                }
            }
        }
        if ((p_18 = (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((*g_1282), ((((*l_1822) = (((g_646 != (p_19 , ((p_18 ^ (-1L)) >= (l_1789[0].f1 | ((*l_979) = ((g_403 , &l_1785) != l_1822)))))) >= 0xEAL) < 0xEDB31DC676C0D550LL)) || l_1823) & l_1789[0].f0))), l_1714[1][1][0]))))
        { 
            struct S0 ***l_1825 = &l_1824[1][1][1];
            int32_t l_1826 = 0x3BEA919CL;
            (*l_1825) = ((*g_1329) = l_1824[0][5][2]);
            l_1826 |= p_19;
            for (g_39 = 11; (g_39 <= (-10)); g_39--)
            { 
                int16_t l_1845[5] = {0xDEF0L,0xDEF0L,0xDEF0L,0xDEF0L,0xDEF0L};
                uint32_t ***l_1847 = (void*)0;
                uint32_t ****l_1846 = &l_1847;
                uint32_t ****l_1849 = &l_1848;
                struct S0 l_1859[5][4] = {{{0x62957DCFL},{0x62957DCFL},{0x62957DCFL},{0x62957DCFL}},{{0x62957DCFL},{0x62957DCFL},{0x62957DCFL},{0x62957DCFL}},{{0x62957DCFL},{0x62957DCFL},{0x62957DCFL},{0x62957DCFL}},{{0x62957DCFL},{0x62957DCFL},{0x62957DCFL},{0x62957DCFL}},{{0x62957DCFL},{0x62957DCFL},{0x62957DCFL},{0x62957DCFL}}};
                int i, j;
                if (p_19)
                { 
                    (*l_979) |= p_18;
                }
                else
                { 
                    uint8_t **l_1838[3][5][4] = {{{&l_1699,&l_1699,&l_1699,&l_1699},{&l_1699,&l_1699,&l_1699,&l_1699},{&l_1699,&l_1699,(void*)0,&l_1699},{&l_1699,&l_1699,(void*)0,(void*)0},{&l_1699,&l_1699,&l_1699,(void*)0}},{{&l_1699,&l_1699,&l_1699,&l_1699},{&l_1699,&l_1699,&l_1699,&l_1699},{&l_1699,&l_1699,(void*)0,&l_1699},{&l_1699,&l_1699,(void*)0,(void*)0},{&l_1699,&l_1699,&l_1699,(void*)0}},{{&l_1699,&l_1699,&l_1699,&l_1699},{&l_1699,&l_1699,&l_1699,&l_1699},{&l_1699,&l_1699,(void*)0,&l_1699},{&l_1699,&l_1699,(void*)0,(void*)0},{&l_1699,&l_1699,&l_1699,(void*)0}}};
                    uint8_t ***l_1839 = &l_1838[2][1][3];
                    int32_t l_1844[6][2][4] = {{{0xAD555EFBL,(-3L),(-3L),0xAD555EFBL},{(-3L),0xAD555EFBL,(-3L),(-3L)}},{{0xAD555EFBL,0xAD555EFBL,0x6AFFA0FDL,0xAD555EFBL},{0xAD555EFBL,(-3L),(-3L),0xAD555EFBL}},{{(-3L),0xAD555EFBL,(-3L),(-3L)},{0xAD555EFBL,0xAD555EFBL,0x6AFFA0FDL,0xAD555EFBL}},{{0xAD555EFBL,(-3L),(-3L),0xAD555EFBL},{(-3L),0xAD555EFBL,(-3L),(-3L)}},{{0xAD555EFBL,0xAD555EFBL,0x6AFFA0FDL,0xAD555EFBL},{0xAD555EFBL,(-3L),(-3L),0xAD555EFBL}},{{(-3L),0xAD555EFBL,(-3L),(-3L)},{0xAD555EFBL,0xAD555EFBL,0x6AFFA0FDL,0xAD555EFBL}}};
                    int i, j, k;
                    l_1754 &= ((*l_807) = (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((!((*l_1223) = (*g_1282))), g_202[1].f3)), ((p_18 ^ (safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((((*l_1839) = l_1838[1][2][1]) == g_1840) == p_19), ((((((((((safe_mod_func_uint16_t_u_u(g_102[2], 0x2609L)) <= (**g_1617)) | l_1844[5][1][3]) >= 0UL) == 6UL) <= p_18) != l_1844[0][0][0]) == l_1845[2]) || p_18) & p_19))) > p_18), 0UL))) ^ g_335.f0))));
                    if (p_19)
                        continue;
                    if (p_18)
                        break;
                }
                (*l_979) |= (((((*l_1846) = (void*)0) != (l_1850 = ((*l_1849) = l_1848))) && (p_18 = l_1789[0].f1)) > p_19);
                for (l_1786 = 28; (l_1786 != 37); l_1786 = safe_add_func_uint32_t_u_u(l_1786, 3))
                { 
                    uint32_t l_1853 = 4294967292UL;
                    if (p_19)
                        break;
                    l_1853++;
                }
                for (l_1441.f0 = (-25); (l_1441.f0 != 6); l_1441.f0 = safe_add_func_uint16_t_u_u(l_1441.f0, 1))
                { 
                    struct S0 l_1858 = {1L};
                    int32_t ****l_1861 = &g_207[5][0];
                    l_1859[3][1] = l_1858;
                    (*l_979) &= ((g_1159 = g_1860) == (l_1861 = &g_207[4][0]));
                }
                if (l_1826)
                    continue;
            }
        }
        else
        { 
            int32_t *l_1864 = &g_1547[1][1][0];
            int32_t *l_1865[1];
            int32_t *l_1866 = &g_1348;
            int i;
            for (i = 0; i < 1; i++)
                l_1865[i] = &g_535;
            l_1863 = l_1862;
            l_1866 = (l_1865[0] = (l_1864 = &p_18));
            return g_1867;
        }
        for (l_1786 = 0; (l_1786 < 2); ++l_1786)
        { 
            (*l_979) |= p_19;
        }
    }
    return p_20;
}



static int16_t  func_24(struct S0  p_25, uint32_t  p_26, uint64_t  p_27, uint16_t  p_28)
{ 
    int64_t *l_443[3];
    int8_t *l_444[3];
    int32_t l_445 = 7L;
    int32_t l_446[4];
    int32_t l_451 = (-1L);
    int8_t l_456 = 0x08L;
    int32_t *l_457 = &l_446[1];
    int32_t *l_458 = &g_43;
    uint16_t *l_465 = &g_156;
    uint16_t **l_464 = &l_465;
    uint16_t *l_474[5];
    const uint8_t l_484 = 0UL;
    uint8_t *l_486 = &g_95;
    const union U1 l_509 = {{0L}};
    union U4 **l_510 = &g_338;
    uint16_t l_570[1][5] = {{0x3419L,0x3419L,0x3419L,0x3419L,0x3419L}};
    uint16_t l_588[3];
    uint64_t l_605 = 0x437F155E10568F7FLL;
    union U2 l_643 = {{0xB0618AB0L}};
    struct S0 *l_682[4];
    struct S0 **l_681 = &l_682[0];
    int i, j;
    for (i = 0; i < 3; i++)
        l_443[i] = &g_39;
    for (i = 0; i < 3; i++)
        l_444[i] = &g_40[0][0][5];
    for (i = 0; i < 4; i++)
        l_446[i] = 0x48962ACFL;
    for (i = 0; i < 5; i++)
        l_474[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_588[i] = 0x15F6L;
    for (i = 0; i < 4; i++)
        l_682[i] = &g_10.f0;
    l_446[0] ^= ((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((!((8L != (l_445 = (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((!(safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(p_28, 4)), ((-10L) ^ (p_27 == ((void*)0 == l_443[0])))))) > (0x86C6L < g_95)), p_26)), p_27)))) != 0L)), 10)), p_25.f0)), 4294967295UL)) | p_27);
    (*l_458) = (((safe_sub_func_int64_t_s_s(0x6FE55A4685B6833DLL, 0x20638FEC1CD9760ALL)) | (safe_mod_func_int16_t_s_s(((p_25.f0 != ((l_451 != (((((*l_457) = (safe_add_func_int16_t_s_s((p_27 > ((p_27 > ((safe_mul_func_uint16_t_u_u(l_456, 0xD961L)) ^ g_403.f0.f0)) || g_152)), 0xD574L))) , 0x96C1L) == g_95) ^ p_25.f0)) < g_99)) , (*l_457)), p_26))) && 6L);
    l_445 ^= ((((*g_160) = ((((!(safe_sub_func_uint64_t_u_u(g_181, ((&p_28 != ((*l_464) = (void*)0)) || ((safe_add_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((++g_360), 0)), (safe_rshift_func_int8_t_s_s((*l_458), 0)))), (safe_mod_func_int64_t_s_s((~(((safe_sub_func_uint16_t_u_u(p_26, 1L)) & (((*l_457) || 18446744073709551615UL) < g_403.f0.f0)) != (*l_457))), (*g_160))))) >= (*l_457)), 0xFD66L)) < g_47))))) && (*l_457)) ^ l_484) | (*l_458))) , p_28) != 4294967295UL);
    if (g_95)
        goto lbl_493;
    if (((g_202[1].f2 != (~((*l_486) = (l_465 == l_474[1])))) && (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_108.f3, (((*l_457) & (safe_mod_func_uint32_t_u_u((&l_443[0] != (void*)0), p_27))) == (*l_457)))), (*l_458)))))
    { 
lbl_493:
        (*l_457) &= p_27;
        return g_335.f0;
    }
    else
    { 
        union U3 l_506 = {0x7A36D73AL};
        union U4 **l_512[2][3][2] = {{{(void*)0,(void*)0},{&g_338,(void*)0},{(void*)0,&g_338}},{{(void*)0,(void*)0},{&g_338,(void*)0},{(void*)0,&g_338}}};
        union U4 ***l_511 = &l_512[1][1][0];
        union U2 **l_526 = &g_9;
        union U1 l_530[2] = {{{0L}},{{0L}}};
        int32_t l_557 = 0x5FAFF3E4L;
        int32_t l_558 = 0xE13DBB84L;
        int32_t l_559 = 0x3AFD4C1FL;
        int32_t l_561[6] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
        uint8_t l_567[4] = {250UL,250UL,250UL,250UL};
        int32_t l_603[6][6][6] = {{{0x49F9E67CL,7L,0xD00766CDL,0xF412388EL,0x4B233901L,0x53011701L},{1L,0x54661B5FL,(-7L),0x53CB81E6L,0x54661B5FL,0x949A7F9EL},{2L,0L,(-1L),0x9007E778L,0x0B34D518L,0x0333D322L},{1L,0x15FCB699L,0x6822AA8DL,0x49F9E67CL,0L,0x4492BB6FL},{1L,9L,0L,0x9007E778L,0xF412388EL,0xB39B1AE5L},{2L,0x0B34D518L,(-1L),0x53CB81E6L,0xF72F8BFFL,0x4A704455L}},{{1L,0L,0x6681BB3CL,0xF412388EL,0L,1L},{0x49F9E67CL,1L,0xD7212ADBL,0x15FCB699L,1L,0x1AA8AF26L},{0xF1F6B6FDL,(-6L),0x0333D322L,1L,0xD1C3EB20L,0xD00766CDL},{0L,(-6L),1L,0x55FB8FD9L,1L,0x1E21D109L},{0x1A7548B3L,1L,0xC11100CBL,0L,0L,0xD7212ADBL},{1L,0L,0xE2734614L,0xF72F8BFFL,0xF72F8BFFL,0xE2734614L}},{{0x0B34D518L,0x0B34D518L,0xE3DDF463L,1L,0xF412388EL,8L},{0x15FCB699L,9L,3L,0xB37DDE93L,0L,0xE3DDF463L},{0x55FB8FD9L,0x15FCB699L,3L,0L,0x0B34D518L,8L},{7L,0L,0xE3DDF463L,0x55FEA8DFL,0x54661B5FL,0xE2734614L},{0x55FEA8DFL,0x54661B5FL,0xE2734614L,1L,0x4B233901L,0xD7212ADBL},{6L,7L,0xC11100CBL,0x0125A1B0L,(-1L),0x1E21D109L}},{{(-1L),1L,1L,0xF1F6B6FDL,0x49F9E67CL,0xD00766CDL},{0x54661B5FL,(-6L),0x0333D322L,0xF1F6B6FDL,2L,0x1AA8AF26L},{(-1L),1L,0xD7212ADBL,0x0125A1B0L,1L,1L},{6L,0L,0x6681BB3CL,1L,0xB37DDE93L,0x4A704455L},{0x55FEA8DFL,1L,(-1L),0x55FEA8DFL,(-6L),0xB39B1AE5L},{7L,0x0125A1B0L,0L,0L,0x9007E778L,0x4492BB6FL}},{{0x55FB8FD9L,0xF412388EL,0x6822AA8DL,0xB37DDE93L,0x9007E778L,0x0333D322L},{0x15FCB699L,0x0125A1B0L,(-1L),1L,(-6L),0x949A7F9EL},{0x0B34D518L,1L,(-7L),0xF72F8BFFL,0xB37DDE93L,0x53011701L},{0x58CB2A15L,(-1L),0L,(-1L),0x58CB2A15L,0xF1F6B6FDL},{0x2BA8A552L,0x91D598D1L,0x55FEA8DFL,0x41344C3AL,1L,9L},{(-1L),0xBAD18B4BL,1L,0x91D598D1L,0x4B1AF517L,9L}},{{(-9L),0xA66DA820L,0x55FEA8DFL,0x85AE5AB5L,0xBD42C570L,0xF1F6B6FDL},{0x4B1AF517L,0xBBD2424BL,0L,0xECDB26DBL,0x3B948B53L,(-1L)},{0x91D598D1L,0x821C3278L,0L,(-5L),0x821C3278L,0L},{1L,0x5916DE38L,0x53CB81E6L,0xE3CB8857L,0x8DE0624CL,0x4B233901L},{(-1L),0x85AE5AB5L,1L,0x4B1AF517L,(-1L),0x55FB8FD9L},{(-1L),0x4047C0C5L,0xD1C3EB20L,0xE3CB8857L,0xECDB26DBL,(-6L)}}};
        int8_t l_604 = 0xB5L;
        const int64_t l_645 = 0xE13D5828860A2740LL;
        struct S0 ***l_683 = &l_681;
        int i, j, k;
        if (g_335.f0)
            goto lbl_493;
        if ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((((safe_mul_func_uint16_t_u_u(1UL, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(1UL, p_25.f0)), 7)), (l_506 , (safe_sub_func_uint32_t_u_u(((l_509 , l_510) == ((*l_511) = l_510)), (-6L)))))))) <= 0x24CAL) == 9L) && g_108.f2), l_506.f2)) == g_10.f0.f0), 0xB379L)))
        { 
            uint32_t l_519 = 1UL;
            for (g_335.f0 = 7; (g_335.f0 >= 56); ++g_335.f0)
            { 
                uint32_t l_527 = 4294967288UL;
                (*l_457) = ((safe_sub_func_int8_t_s_s((g_204 || 4294967290UL), ((*l_486) = (p_25 , (safe_mul_func_int8_t_s_s(l_519, p_26)))))) > (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(((void*)0 != l_526), 12)) != l_519) , g_102[3]), 1L)), l_519)));
                return l_527;
            }
        }
        else
        { 
            int32_t *l_541 = &g_535;
            union U4 ***l_549 = (void*)0;
            int32_t l_560 = (-7L);
            int32_t l_563 = 0L;
            int32_t l_564 = 0xE470AFEAL;
            int32_t l_566[2][6][6] = {{{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}},{{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}}};
            union U3 ***l_579 = (void*)0;
            union U3 ****l_578 = &l_579;
            union U2 l_585 = {{5L}};
            int16_t l_595 = 0x865FL;
            uint16_t l_597 = 65531UL;
            int32_t *l_602[6] = {&l_566[1][1][2],&l_566[1][1][2],&l_566[1][1][2],&l_566[1][1][2],&l_566[1][1][2],&l_566[1][1][2]};
            int i, j, k;
            if (((*l_457) ^ (safe_sub_func_uint16_t_u_u((l_530[0] , g_106.f3), g_39))))
            { 
                union U4 *l_538 = &g_335;
                int16_t *l_545 = &g_98;
                int32_t l_552 = 1L;
                for (g_403.f1 = 0; (g_403.f1 == 58); ++g_403.f1)
                { 
                    int32_t *l_542 = (void*)0;
                    (*l_457) = ((((*l_458) = ((((safe_mul_func_uint8_t_u_u(g_535, (safe_add_func_int64_t_s_s(((l_538 = &g_335) == (void*)0), ((**l_526) , ((((p_27 | p_27) >= ((void*)0 == &g_283[4][1])) < p_28) || p_27)))))) < p_26) > g_108.f1) < p_28)) ^ 0xCDL) , (-6L));
                    l_542 = l_541;
                }
                (*l_457) &= ((safe_add_func_int64_t_s_s(((((void*)0 == l_545) ^ p_28) >= ((safe_div_func_uint32_t_u_u(((+0xEACDB5E2L) == (l_549 == (void*)0)), (((*l_541) = (safe_mod_func_int32_t_s_s((p_28 >= 251UL), (-5L)))) || (*l_458)))) ^ l_552)), g_108.f2)) < p_26);
            }
            else
            { 
                int64_t l_562 = 0xC8519B97B3AF6EA4LL;
                int32_t l_565[3];
                union U2 * const l_591[2][1][4] = {{{&l_585,&l_585,&l_585,&l_585}},{{&l_585,&l_585,&l_585,&l_585}}};
                union U2 *l_593 = &g_10;
                union U2 **l_592 = &l_593;
                int32_t *l_594[7][5][5] = {{{&l_564,&l_446[3],(void*)0,&l_564,&l_563},{&l_559,&l_559,&l_446[1],&l_561[0],&l_560},{&l_561[0],&l_566[1][2][0],&l_560,&l_566[1][2][0],&l_561[0]},{&l_559,&g_43,&g_535,&l_446[0],&l_563},{&l_558,&l_445,&l_564,&l_565[1],&l_445}},{{&l_560,&l_566[0][4][4],&l_558,&g_43,&l_563},{&l_566[1][3][2],&l_565[1],&l_559,&l_564,&l_561[0]},{&l_563,&l_446[0],&l_559,&l_560,&l_560},{&l_566[1][2][0],&l_565[1],&l_445,&l_563,&l_563},{&l_561[0],&l_565[1],&l_561[0],&l_564,&l_561[0]}},{{&l_558,&l_446[2],&l_563,&l_564,&l_565[1]},{&l_446[0],&l_564,&l_566[1][1][2],&l_446[0],(void*)0},{&l_445,(void*)0,&l_563,&l_565[1],&l_559},{&g_535,&g_43,&l_560,&l_565[1],&l_566[1][1][2]},{(void*)0,&l_564,&l_563,&l_565[0],&l_564}},{{&l_561[0],&l_559,&l_558,&l_558,&l_559},{&l_445,&l_563,&l_445,&l_564,&l_565[0]},{&l_565[1],&l_446[0],&l_566[1][1][0],&l_446[1],&g_535},{&l_565[0],&l_564,&g_43,&l_561[2],&l_559},{&l_565[1],&l_558,&l_561[0],(void*)0,&l_560}},{{&l_445,&l_446[0],&l_563,&l_566[1][3][2],&l_565[0]},{&l_561[0],&l_565[2],&g_43,(void*)0,&l_560},{(void*)0,&l_565[0],&l_565[0],(void*)0,&l_561[2]},{&g_535,&l_446[0],&l_565[1],&l_560,&l_565[2]},{&l_445,&l_560,&l_561[2],&l_563,(void*)0}},{{&l_446[0],(void*)0,&l_561[0],&l_560,&l_565[1]},{&l_558,&l_564,&l_446[3],(void*)0,&l_564},{&l_560,&l_565[1],&l_566[1][1][2],(void*)0,&l_564},{&l_560,&g_43,&l_445,&l_566[1][3][2],&l_445},{&l_564,&l_564,&l_563,(void*)0,&l_565[2]}},{{&l_563,&l_559,&l_560,&l_561[2],&l_445},{(void*)0,&l_560,&l_560,&l_446[1],&l_566[0][5][3]},{&l_558,&l_559,(void*)0,&l_564,&l_565[0]},{&l_558,&l_564,&l_565[1],&l_558,(void*)0},{(void*)0,&g_43,&l_563,&l_565[0],&l_446[2]}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_565[i] = (-1L);
                for (g_156 = (-13); (g_156 < 12); g_156 = safe_add_func_uint64_t_u_u(g_156, 4))
                { 
                    int32_t *l_555 = &g_535;
                    int32_t *l_556[1][3][4] = {{{&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535}}};
                    struct S0 *l_573[4] = {&g_58,&g_58,&g_58,&g_58};
                    int i, j, k;
                    p_25 = p_25;
                    (*l_541) &= (-2L);
                    l_567[1]--;
                    l_570[0][4]++;
                    g_58 = g_403.f0;
                }
                for (g_99 = 0; (g_99 <= 5); g_99 += 1)
                { 
                    int32_t *l_586[1];
                    int16_t l_587 = 0L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_586[i] = &l_561[1];
                    (*l_457) = (l_561[g_99] = (safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((void*)0 != l_578), 5L)), (((p_27 & (l_530[0] , 0xDBE7A03509C0E78DLL)) != ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s((l_585 , l_565[1]))) < 0x350376C1C0E45286LL), p_26)), g_108.f4)) == l_562)) > g_535))));
                    --l_588[2];
                }
                (*l_541) &= (l_591[0][0][2] != ((*l_592) = func_35(p_25)));
                --l_597;
                for (l_563 = 0; (l_563 <= 3); l_563 += 1)
                { 
                    int i;
                    (*l_458) = (6UL != g_102[l_563]);
                }
            }
            for (l_558 = 0; (l_558 >= (-8)); l_558 = safe_sub_func_uint64_t_u_u(l_558, 1))
            { 
                (*l_458) = (*l_458);
            }
            l_605++;
        }
        (*l_457) ^= p_27;
        for (g_181 = 16; (g_181 != 47); ++g_181)
        { 
            int16_t l_623 = (-9L);
            union U2 *l_641 = &g_10;
            union U2 *l_642 = (void*)0;
            struct S0 l_644[7][1] = {{{0x8771E8ACL}},{{0x894630CBL}},{{0x8771E8ACL}},{{0x8771E8ACL}},{{0x894630CBL}},{{0x8771E8ACL}},{{0x8771E8ACL}}};
            int32_t l_660 = 8L;
            int32_t l_661 = 1L;
            int32_t l_662 = 0xFD5D94A8L;
            int32_t l_664 = 0xCF1BFCEEL;
            uint64_t l_665 = 1UL;
            int i, j;
            for (g_535 = 0; (g_535 == 5); ++g_535)
            { 
                uint8_t l_622 = 0UL;
                int32_t l_655 = 0x84262258L;
                int32_t l_659 = 0xAA95F48CL;
                int32_t l_663 = 0x6777AE71L;
                for (l_445 = 0; (l_445 != 27); l_445 = safe_add_func_uint8_t_u_u(l_445, 9))
                { 
                    union U4 l_619 = {0x284CB379C12CCD6DLL};
                    uint8_t * const l_624 = &g_106.f3;
                    if (p_25.f0)
                        break;
                    (*l_458) = (safe_mod_func_int32_t_s_s((!(p_25.f0 >= (&g_95 != (((p_25.f0 > (l_619 , ((safe_mod_func_int16_t_s_s(4L, 0x77CCL)) , ((l_622 || l_623) != l_619.f1)))) && p_27) , l_624)))), g_202[1].f4));
                    return p_28;
                }
                if (((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((p_27 == (l_623 < (((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((l_644[1][0] , (*l_641)) , 0x8097E1E7L) & (*l_457)), 2)), l_644[1][0].f0)), 0x8CE6EFF4A19E479ALL)), 0x7BE4L)) & p_25.f0), g_360)), g_535)) ^ p_28) >= l_645))) , g_535), 4UL)), g_153)) , 0xE2DA93EDL))
                { 
                    int32_t *l_647 = &l_603[0][5][3];
                    int32_t *l_648 = (void*)0;
                    int32_t *l_649 = &l_557;
                    int32_t *l_650 = &l_557;
                    int32_t *l_651 = &l_445;
                    int32_t *l_652 = &l_603[3][3][1];
                    int32_t *l_653 = &l_559;
                    int32_t *l_654 = &l_561[5];
                    int32_t *l_656 = (void*)0;
                    int32_t *l_657 = &l_445;
                    int32_t *l_658[6] = {&l_558,&l_603[2][1][2],&l_558,&l_558,&l_603[2][1][2],&l_558};
                    union U3 ***l_669 = &g_282[1];
                    union U3 ****l_668 = &l_669;
                    int i;
                    l_665++;
                    (*l_668) = &g_282[1];
                }
                else
                { 
                    return p_27;
                }
                if (l_530[0].f0.f0)
                    continue;
            }
            if (p_25.f0)
                continue;
            for (g_60.f0 = 0; (g_60.f0 < 2); g_60.f0 = safe_add_func_uint64_t_u_u(g_60.f0, 4))
            { 
                int8_t l_672 = 0xBDL;
                const uint32_t l_677 = 1UL;
                struct S0 *l_680 = &l_644[1][0];
                if (l_672)
                { 
                    union U2 *l_679 = &l_643;
                    l_660 &= (((safe_rshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((*l_458) |= 1L), l_677)) || (safe_unary_minus_func_uint8_t_u(255UL))), 1)) , &g_10) != l_679);
                }
                else
                { 
                    return g_181;
                }
                (*l_680) = p_25;
            }
        }
        (*l_683) = l_681;
    }
    return g_226.f0;
}



static struct S0  func_29(union U2 * p_30, union U1  p_31, union U2 * p_32, union U2  p_33, union U2 * p_34)
{ 
    int32_t *l_51 = &g_43;
    int32_t *l_52 = (void*)0;
    int32_t *l_53 = &g_43;
    int32_t *l_54[1][2];
    struct S0 *l_59 = &g_60;
    uint16_t l_127 = 0UL;
    union U3 l_162 = {0xEA2D5331L};
    uint64_t l_183 = 18446744073709551615UL;
    union U2 l_192 = {{0x89876BB3L}};
    int32_t l_198 = 0x6AEE27A7L;
    union U3 *l_201 = &g_202[1];
    struct S0 l_203 = {0x3C5A20AEL};
    int16_t l_306[7][6][4] = {{{(-8L),0x8D98L,0x43F4L,0x5CB3L},{(-2L),(-2L),0L,0x43F4L},{0x5413L,(-1L),(-3L),0x350DL},{(-1L),0L,0x5C33L,0xC41CL},{0xA385L,0x1475L,(-2L),0xE2ECL},{(-2L),(-2L),9L,0xFFC9L}},{{0xC41CL,0xD354L,8L,0x44C6L},{(-1L),1L,(-3L),0x42ADL},{0xD9F6L,(-4L),0x7A6DL,0x04CDL},{(-9L),0L,0x4B7BL,0L},{(-3L),0L,(-2L),0xA4E0L},{0x4B7BL,(-2L),0x2978L,0x2978L}},{{0x04CDL,0x04CDL,(-1L),0xD354L},{0x44C6L,0xC35CL,0x42ADL,0L},{0L,0xA385L,0L,0x42ADL},{0x8D98L,0xA385L,0L,0L},{0xA385L,0xC35CL,0L,0xD354L},{0x5CB3L,0x04CDL,1L,0x2978L}},{{0x43F4L,(-2L),0L,0xA4E0L},{0x350DL,0L,0x7A6DL,0L},{0xC41CL,0x5C33L,0L,(-1L)},{0xE2ECL,(-1L),0L,(-2L)},{0xFFC9L,0x8654L,0x4B7BL,0L},{0x44C6L,1L,0L,0xA4E0L}},{{0x42ADL,1L,(-9L),9L},{0x04CDL,0x4B7BL,(-2L),0x6F89L},{0xD9F6L,0xC35CL,(-4L),(-9L)},{0xFFC9L,0xC41CL,0L,(-4L)},{0L,0x1256L,0L,0L},{6L,(-9L),0x7A6DL,0x350DL}},{{0x5CB3L,0x4B7BL,0L,(-9L)},{0xA4E0L,(-2L),0L,(-9L)},{0x5CB3L,0L,0x7A6DL,0L},{6L,0x98D3L,0L,(-1L)},{0L,(-1L),0L,0L},{0xFFC9L,0x5C33L,(-4L),0xE2ECL}},{{0xD9F6L,1L,(-2L),(-9L)},{0x04CDL,0xFFC9L,(-9L),0x2978L},{0x42ADL,0x5F6BL,0L,0x6F89L},{0x44C6L,(-9L),0x4B7BL,0xBB0EL},{0xFFC9L,0xA385L,0L,0x4B7BL},{0xE2ECL,0x1256L,0L,(-9L)}}};
    uint64_t l_309 = 0x836181A78855DD7CLL;
    union U3 ***l_383[7];
    union U3 ****l_382 = &l_383[3];
    int64_t * const l_392 = &g_39;
    int64_t l_414 = 0xAD42B0A2042FC192LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_54[i][j] = &g_43;
    }
    for (i = 0; i < 7; i++)
        l_383[i] = &g_282[0];
    ++g_55;
    (*l_59) = (g_58 = g_10.f0);
    for (g_55 = (-3); (g_55 != 41); g_55 = safe_add_func_uint8_t_u_u(g_55, 1))
    { 
        int64_t *l_63 = &g_39;
        int32_t l_70[2];
        int16_t *l_71 = &g_45;
        int8_t l_72 = 1L;
        int32_t l_100 = (-4L);
        union U3 *l_105 = &g_106;
        const struct S0 *l_110 = &g_58;
        int64_t l_128 = 0xD72739EBEB9EEC29LL;
        int64_t l_197[3];
        int i;
        for (i = 0; i < 2; i++)
            l_70[i] = 0x57DCCC76L;
        for (i = 0; i < 3; i++)
            l_197[i] = 6L;
        if ((((*l_63) = g_10.f0.f0) ^ (safe_sub_func_int16_t_s_s(((*l_71) |= (((*l_51) != 0x38L) , (4L ^ (((4294967295UL | (safe_mod_func_int64_t_s_s(0x4914D865E429B053LL, (((safe_mul_func_int8_t_s_s((-8L), g_58.f0)) <= l_70[0]) , 0xF535935178915D48LL)))) , (*l_51)) <= 0xEBAC3F40L)))), l_72))))
        { 
            uint8_t *l_94 = &g_95;
            int32_t l_96 = 7L;
            int32_t l_97 = (-5L);
            int32_t l_101 = 0x1C73263BL;
            union U3 *l_107 = &g_108;
            l_97 &= ((l_72 , (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s(p_33.f0.f0, (safe_sub_func_int16_t_s_s((l_70[0] || (safe_rshift_func_int16_t_s_s(2L, (g_39 > (0x0CEAL > (safe_unary_minus_func_int64_t_s((((((safe_mul_func_uint8_t_u_u(((*l_94) |= (safe_rshift_func_int16_t_s_u((((((*l_71) = (safe_mod_func_int16_t_s_s(g_40[1][0][3], g_60.f0))) != p_33.f0.f0) , 0xD9L) > p_33.f0.f0), l_70[0]))), 0xAAL)) <= p_31.f0.f0) | l_70[1]) , 0x82A8L) > l_70[0])))))))), g_47)))), g_43)) || g_55), l_96)) && l_96), g_55)), p_33.f0.f0))) ^ g_46);
            g_102[3]--;
            l_107 = l_105;
        }
        else
        { 
            int32_t *l_109[2];
            int i;
            for (i = 0; i < 2; i++)
                l_109[i] = &l_100;
            l_54[0][0] = l_109[1];
        }
    }
    for (g_98 = 1; (g_98 >= 0); g_98 -= 1)
    { 
        int64_t l_217 = 1L;
        int32_t l_218 = 3L;
        int32_t l_219 = 0L;
        int32_t l_220 = 0x13B5F938L;
        int32_t l_221 = 1L;
        union U3 l_240[4] = {{-1L},{-1L},{-1L},{-1L}};
        uint64_t *l_251[1][4] = {{&l_183,&l_183,&l_183,&l_183}};
        uint16_t l_259 = 0UL;
        union U1 l_300 = {{0xA158747CL}};
        int i, j;
        for (g_55 = 0; (g_55 <= 3); g_55 += 1)
        { 
            union U3 *l_200 = &g_106;
            uint8_t l_210 = 0x45L;
            for (g_185 = 0; (g_185 <= 3); g_185 += 1)
            { 
                l_201 = l_200;
                return l_203;
            }
            for (p_33.f0.f0 = 0; (p_33.f0.f0 <= 1); p_33.f0.f0 += 1)
            { 
                for (g_106.f3 = 0; (g_106.f3 <= 1); g_106.f3 += 1)
                { 
                    int32_t ****l_209 = &g_207[5][0];
                    int i, j, k;
                    g_204++;
                    if (g_184[(p_33.f0.f0 + 2)][(g_55 + 2)][(g_98 + 1)])
                        break;
                    if (g_98)
                        break;
                    (*l_209) = g_207[5][0];
                }
                return g_60;
            }
            (*l_53) &= l_210;
            return p_33.f0;
        }
        for (l_192.f0.f0 = 0; (l_192.f0.f0 <= 1); l_192.f0.f0 += 1)
        { 
            struct S0 l_211 = {0x3D6F2558L};
            int32_t l_212 = (-1L);
            int32_t l_213 = 0xF36FFF55L;
            int32_t l_214 = (-5L);
            int32_t l_215 = 0x430D1F88L;
            int32_t l_216[7][2] = {{4L,(-6L)},{4L,4L},{(-6L),4L},{4L,(-6L)},{4L,4L},{(-6L),4L},{4L,(-6L)}};
            uint32_t l_222[2][5] = {{0xBBFA448FL,0xBBFA448FL,0x90D2587FL,0xBBFA448FL,0xBBFA448FL},{18446744073709551614UL,0xBBFA448FL,18446744073709551614UL,18446744073709551614UL,0xBBFA448FL}};
            struct S0 l_225 = {0x3C69A03EL};
            int i, j;
            for (g_108.f2 = 0; (g_108.f2 <= 1); g_108.f2 += 1)
            { 
                return l_211;
            }
            l_222[0][4]--;
            for (g_106.f0 = 0; (g_106.f0 <= 1); g_106.f0 += 1)
            { 
                return l_225;
            }
            return g_226;
        }
        for (l_203.f0 = 3; (l_203.f0 >= 0); l_203.f0 -= 1)
        { 
            uint8_t *l_235[5] = {&g_202[1].f3,&g_202[1].f3,&g_202[1].f3,&g_202[1].f3,&g_202[1].f3};
            uint32_t l_257 = 0xE9DA6D73L;
            union U3 **l_261 = &l_201;
            union U3 ***l_260 = &l_261;
            uint8_t l_281 = 253UL;
            int32_t l_307 = 0x037CC935L;
            int32_t l_308 = 0x11F6C4FAL;
            int i;
            if ((safe_mod_func_int64_t_s_s((((safe_add_func_uint16_t_u_u(65535UL, (g_98 != (safe_lshift_func_int8_t_s_u(l_217, g_152))))) || 0UL) , (safe_sub_func_uint8_t_u_u((g_95--), ((safe_add_func_int16_t_s_s(0x6B15L, (l_240[1] , 0xBA9FL))) , p_33.f0.f0)))), g_108.f0)))
            { 
                (*l_59) = g_226;
            }
            else
            { 
                uint64_t l_246 = 2UL;
                uint64_t *l_249 = &g_181;
                uint64_t **l_250[4] = {&l_249,&l_249,&l_249,&l_249};
                union U2 *l_255 = &l_192;
                union U2 **l_254 = &l_255;
                union U2 * const l_256 = &g_10;
                int32_t l_258 = 0xDFED9079L;
                union U3 l_271 = {0xF346CF62L};
                int i;
                (*l_53) = (g_241 >= (safe_lshift_func_uint8_t_u_s(((((((l_258 = ((safe_add_func_uint8_t_u_u((l_246 = p_33.f0.f0), 251UL)) & (safe_mod_func_int64_t_s_s(((l_251[0][0] = l_249) == (void*)0), ((((*p_34) , ((safe_div_func_uint64_t_u_u((((*l_254) = func_35(g_58)) == l_256), (*g_160))) | l_257)) && p_31.f0.f0) | l_240[1].f4))))) != g_202[1].f4) >= 0x8CBCL) , 0xF9L) < 0x6EL) != l_259), l_240[1].f4)));
                for (g_47 = 0; (g_47 <= 3); g_47 += 1)
                { 
                    union U3 ****l_262 = &l_260;
                    int32_t l_266 = 0x49C64D65L;
                    uint8_t l_280 = 0x21L;
                    uint64_t *l_286 = (void*)0;
                    int i, j, k;
                    (*l_262) = l_260;
                    l_266 ^= (g_184[l_203.f0][(g_98 + 2)][(l_203.f0 + 1)] & (safe_mod_func_uint8_t_u_u(0x61L, ((+0x054550ECL) ^ ((void*)0 != &l_201)))));
                    (*l_53) ^= (18446744073709551615UL & (g_184[l_203.f0][(g_98 + 4)][(g_98 + 3)] < (safe_lshift_func_uint8_t_u_s((0x9D46L && ((l_281 = (((((((*g_160) = (-7L)) && (safe_sub_func_int64_t_s_s((l_271 , g_184[g_98][g_98][(g_98 + 4)]), ((((safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((l_219 < g_184[l_203.f0][(g_98 + 4)][(g_98 + 3)]) == g_40[0][0][2]), 1L)), 7)), g_47)), p_31.f0.f0)) & l_257) , l_280) > g_184[l_203.f0][(g_98 + 4)][(g_98 + 3)])))) == g_10.f0.f0) < 0x35L) , p_31.f0.f0) && l_266)) == 0L)), p_33.f0.f0))));
                    (**l_262) = g_282[1];
                    l_258 ^= (safe_lshift_func_uint8_t_u_s(((l_286 == l_251[0][1]) | (l_281 == p_31.f0.f0)), (3L | p_31.f0.f0)));
                }
            }
            if ((g_133 ^ 0x32CBFD598AE991FCLL))
            { 
                int64_t l_291 = (-4L);
                const int32_t l_305[6][1][3] = {{{(-5L),(-5L),0L}},{{0x90FC01C5L,0xB8163206L,0x90FC01C5L}},{{(-5L),0L,0L}},{{0L,0xB8163206L,0L}},{{(-5L),(-5L),0L}},{{0x90FC01C5L,0xB8163206L,0x90FC01C5L}}};
                int i, j, k;
                l_221 &= ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_291 = p_31.f0.f0), ((g_202[1].f0 == ((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_300 , (safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((*l_51) | (g_226.f0 <= g_153)), p_33.f0.f0)) , g_10.f0.f0), l_305[4][0][2]))), 2)), 0x9FL)), p_31.f0.f0)) == (*l_53))) & 0x9F70L))) <= 0xBD662E9029FDCDEELL), 4UL)) == (*l_53));
            }
            else
            { 
                return g_226;
            }
            l_309++;
            if (p_33.f0.f0)
                break;
            for (g_106.f0 = 0; (g_106.f0 <= 1); g_106.f0 += 1)
            { 
                return g_10.f0;
            }
        }
    }
    for (g_106.f0 = 0; (g_106.f0 < 6); g_106.f0 = safe_add_func_uint16_t_u_u(g_106.f0, 6))
    { 
        int32_t l_330[6][2] = {{0x08632886L,0x2F6E2ABBL},{1L,1L},{0x2F6E2ABBL,1L},{1L,0x2F6E2ABBL},{1L,1L},{0x2F6E2ABBL,1L}};
        union U4 *l_334 = &g_335;
        int16_t *l_345 = &g_45;
        union U3 *l_363[2];
        int32_t l_420 = 0x211D8B41L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_363[i] = &g_108;
        for (l_309 = 10; (l_309 <= 29); l_309 = safe_add_func_uint64_t_u_u(l_309, 8))
        { 
            union U4 l_344 = {0xD880C36692C0D943LL};
            int8_t l_379 = 0x92L;
            int32_t l_386 = 1L;
            int8_t *l_391 = &g_40[1][1][6];
            int16_t l_408 = (-6L);
            int16_t l_418 = 1L;
            int32_t l_419[4][3] = {{0x400C0375L,0x2941B8CBL,(-1L)},{0xA5EBA586L,0x2941B8CBL,0xA5EBA586L},{(-1L),0x400C0375L,(-1L)},{(-1L),(-1L),0x400C0375L}};
            uint16_t l_424[2][2][5] = {{{0x7FAAL,0x85F8L,0x85F8L,0x7FAAL,0UL},{0x7FAAL,0x85F8L,0x85F8L,0x7FAAL,0UL}},{{0x7FAAL,0x85F8L,0x85F8L,0x7FAAL,0UL},{0x7FAAL,0x85F8L,0x85F8L,0x7FAAL,0UL}}};
            int i, j, k;
            for (p_33.f0.f0 = 0; (p_33.f0.f0 == (-24)); p_33.f0.f0 = safe_sub_func_uint8_t_u_u(p_33.f0.f0, 6))
            { 
                int16_t *l_331 = &l_306[6][1][3];
                int32_t l_332 = 0x379A0499L;
                uint16_t *l_346 = (void*)0;
                uint16_t *l_347[1];
                uint64_t *l_352 = (void*)0;
                int32_t l_353 = 2L;
                int32_t l_385 = 0xBDA4903DL;
                int i;
                for (i = 0; i < 1; i++)
                    l_347[i] = (void*)0;
                if ((((safe_sub_func_uint64_t_u_u(((p_31 , (g_108.f1 != 0x66C3L)) <= p_31.f0.f0), (((*l_331) ^= (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0xF03EL, ((((+((safe_unary_minus_func_int64_t_s((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_31.f0.f0, ((((*l_201) , p_31.f0.f0) & (*l_51)) && (*l_51)))), (*l_51))))) <= (*l_51))) | p_31.f0.f0) >= l_330[2][0]) , 3UL))), l_330[5][1]))) > g_106.f0))) == l_332) , p_33.f0.f0))
                { 
                    union U3 l_333 = {-1L};
                    union U4 **l_336 = (void*)0;
                    union U4 **l_337 = &l_334;
                    g_338 = ((*l_337) = (l_333 , l_334));
                    if (l_332)
                        continue;
                }
                else
                { 
                    return p_33.f0;
                }
                if ((~(safe_mod_func_uint64_t_u_u((g_335.f0 = (g_106.f4 == ((g_45 = (((g_133 && (l_332 = ((l_344 , l_345) == (void*)0))) , 0xBFAFFB6AL) & (((((safe_rshift_func_uint16_t_u_s((((((safe_lshift_func_int16_t_s_s(((((*l_53) = (&g_282[1] == (void*)0)) || 1UL) >= p_31.f0.f0), p_31.f0.f0)) < p_31.f0.f0) && p_33.f0.f0) != g_60.f0) , 0x9CD5L), p_31.f0.f0)) , 65527UL) | l_330[3][0]) > p_31.f0.f0) , 4294967295UL))) <= l_330[2][0]))), l_353))))
                { 
                    union U3 **l_364 = &l_363[0];
                    union U3 **l_365 = &l_201;
                    uint16_t **l_366 = &l_347[0];
                    const int32_t l_367 = 0x0BD48041L;
                    uint8_t *l_380[1][1][5];
                    int32_t l_381[7][5][1] = {{{5L},{0xBD70E0E7L},{(-5L)},{(-5L)},{0xBD70E0E7L}},{{5L},{(-8L)},{0xA718A48EL},{0xD7E0959EL},{2L}},{{0xD7E0959EL},{0xA718A48EL},{(-8L)},{5L},{0xBD70E0E7L}},{{(-5L)},{(-5L)},{0xBD70E0E7L},{5L},{(-8L)}},{{0xA718A48EL},{0xD7E0959EL},{2L},{0xD7E0959EL},{0xA718A48EL}},{{(-8L)},{5L},{0xBD70E0E7L},{(-5L)},{(-5L)}},{{0xBD70E0E7L},{5L},{(-8L)},{0xA718A48EL},{0xD7E0959EL}}};
                    union U3 *** const *l_384 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_380[i][j][k] = &g_108.f3;
                        }
                    }
                    (*l_51) &= ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((g_360 | (~(safe_unary_minus_func_uint32_t_u(0xFA912836L)))), ((((*l_365) = ((*l_364) = l_363[1])) != (void*)0) && ((g_58 , &g_55) == ((*l_366) = &g_156))))) < l_367), l_332)) > (-1L)), p_33.f0.f0)) == p_31.f0.f0);
                    l_385 &= (safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((p_31.f0.f0 , (*g_338)) , p_31.f0.f0) >= (safe_mod_func_uint64_t_u_u(18446744073709551613UL, (+(g_98 < (l_381[6][0][0] = l_379)))))), (l_382 != l_384))), p_33.f0.f0)), 0xC937L)) != 0x12L), p_33.f0.f0));
                    if (p_31.f0.f0)
                        continue;
                }
                else
                { 
                    uint32_t l_387 = 0x4A3151D1L;
                    (*l_53) = p_31.f0.f0;
                    if (l_330[2][0])
                        break;
                    --l_387;
                }
            }
        }
    }
    return g_403.f0;
}



static union U2 * func_35(struct S0  p_36)
{ 
    int32_t *l_42 = &g_43;
    int32_t *l_44[5] = {&g_43,&g_43,&g_43,&g_43,&g_43};
    int i;
    g_47--;
    return &g_10;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_40[i][j][k], "g_40[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_102[i], "g_102[i]", print_hash_value);

    }
    transparent_crc(g_106.f3, "g_106.f3", print_hash_value);
    transparent_crc(g_108.f3, "g_108.f3", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_184[i][j][k], "g_184[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_185, "g_185", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_202[i].f3, "g_202[i].f3", print_hash_value);

    }
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_226.f0, "g_226.f0", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_335.f0, "g_335.f0", print_hash_value);
    transparent_crc(g_335.f1, "g_335.f1", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1065[i], "g_1065[i]", print_hash_value);

    }
    transparent_crc(g_1203, "g_1203", print_hash_value);
    transparent_crc(g_1348, "g_1348", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1357[i][j].f3, "g_1357[i][j].f3", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1547[i][j][k], "g_1547[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1549, "g_1549", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1552[i][j], "g_1552[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1567, "g_1567", print_hash_value);
    transparent_crc(g_1582, "g_1582", print_hash_value);
    transparent_crc(g_1664, "g_1664", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1726[i].f0, "g_1726[i].f0", print_hash_value);
        transparent_crc(g_1726[i].f1, "g_1726[i].f1", print_hash_value);

    }
    transparent_crc(g_1777, "g_1777", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1792[i][j][k], "g_1792[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1870.f0.f0, "g_1870.f0.f0", print_hash_value);
    transparent_crc(g_1903, "g_1903", print_hash_value);
    transparent_crc(g_2055, "g_2055", print_hash_value);
    transparent_crc(g_2062, "g_2062", print_hash_value);
    transparent_crc(g_2094, "g_2094", print_hash_value);
    transparent_crc(g_2235.f0.f0, "g_2235.f0.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
