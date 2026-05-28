// SPDX-License-Identifier: MIT
// cctest_csmith_604fcb11.c --- cctest case csmith_604fcb11 (csmith seed 1615842065)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x38168505 */
/* @exp_ticks 0x3849 */

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

// Options:   -s 1615842065 -o /tmp/csmith_gen_z4nkj0b2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   const uint16_t  f1;
};

union U1 {
   int32_t  f0;
};

union U2 {
   int32_t  f0;
   int16_t  f1;
};


static union U1 g_7 = {0x6BAFCB14L};
static int8_t g_24 = (-1L);
static uint64_t g_40[1] = {1UL};
static int16_t g_44 = (-1L);
static uint32_t g_47 = 1UL;
static int32_t g_61[3] = {0x0F59FB91L,0x0F59FB91L,0x0F59FB91L};
static int64_t g_62 = 9L;
static uint64_t g_63 = 0UL;
static uint8_t g_64 = 0UL;
static int32_t g_66 = 0x74A89AEEL;
static uint16_t g_67[5][1][1] = {{{6UL}},{{6UL}},{{6UL}},{{6UL}},{{6UL}}};
static int64_t g_98[2] = {(-7L),(-7L)};
static uint16_t g_102[5][2] = {{0x69C7L,0x69C7L},{0x69C7L,0x69C7L},{0x69C7L,0x69C7L},{0x69C7L,0x69C7L},{0x69C7L,0x69C7L}};
static uint64_t g_116 = 0x60D513ACB904F0D9LL;
static uint32_t g_133 = 0UL;
static uint64_t g_135 = 0xFB5FCD5A05CCE5ABLL;
static int32_t g_145 = 0x32F28BEFL;
static uint32_t g_175 = 0x3F184A61L;



static uint8_t  func_1(void);
static int8_t  func_8(uint32_t  p_9);
static int32_t  func_19(int64_t  p_20, struct S0  p_21, struct S0  p_22);
static int64_t  func_35(uint8_t  p_36, uint16_t  p_37);




static uint8_t  func_1(void)
{ 
    uint32_t l_10[5][5][1] = {{{0x884515FDL},{0UL},{6UL},{0x898F01BAL},{6UL}},{{0UL},{0x884515FDL},{0UL},{6UL},{0x898F01BAL}},{{6UL},{0UL},{0x884515FDL},{0UL},{6UL}},{{0x898F01BAL},{6UL},{0UL},{0x884515FDL},{0UL}},{{6UL},{0x898F01BAL},{6UL},{0UL},{0x884515FDL}}};
    uint32_t l_51 = 0xC00D4B3BL;
    union U1 l_55 = {8L};
    int32_t l_65[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_65[i] = 0L;
    if ((safe_mod_func_int8_t_s_s((safe_div_func_int64_t_s_s((l_51 = ((+(((g_24 = (g_7 , func_8(l_10[2][4][0]))) > (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s(l_10[2][4][0])), g_7.f0))) != l_10[3][4][0])) || g_44)), 0xFA0B5BCDCEC458AFLL)), (-4L))))
    { 
        uint16_t l_54[4][5][3] = {{{1UL,65529UL,0x6B8CL},{65535UL,65535UL,65535UL},{0x6B8CL,1UL,65535UL},{65533UL,65535UL,0UL},{0x6B8CL,0x6B8CL,0xEA9BL}},{{65535UL,65533UL,1UL},{1UL,0x6B8CL,1UL},{65535UL,65535UL,1UL},{65529UL,1UL,1UL},{1UL,65535UL,1UL}},{{0x19AFL,65529UL,0xEA9BL},{1UL,1UL,0UL},{65529UL,0x19AFL,65535UL},{65535UL,1UL,65535UL},{1UL,65529UL,0x6B8CL}},{{65535UL,65535UL,65535UL},{0x6B8CL,1UL,65535UL},{65533UL,65535UL,0UL},{0x6B8CL,0x6B8CL,0xEA9BL},{65535UL,65533UL,1UL}}};
        int32_t l_56 = 1L;
        uint64_t l_57 = 1UL;
        int i, j, k;
        l_57 |= (0x8F83F3A8L != (((safe_mod_func_int16_t_s_s((l_54[3][4][0] &= l_51), (l_55 , g_7.f0))) != g_24) ^ l_56));
        g_61[1] = ((l_54[3][4][0] | ((-1L) ^ 0xBBL)) || ((safe_rshift_func_int16_t_s_u(((~(g_40[0] && 18446744073709551615UL)) & g_7.f0), l_10[2][4][0])) > g_7.f0));
    }
    else
    { 
lbl_88:
        g_64 = (g_63 |= (g_62 &= g_61[1]));
    }
    for (g_47 = 0; (g_47 <= 0); g_47 += 1)
    { 
        union U1 l_86 = {0xA89BF980L};
        int32_t l_99 = 0x713F97C6L;
        g_67[3][0][0]--;
        if ((((safe_mul_func_int16_t_s_s(g_61[1], (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((l_65[0] = ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_10[2][4][0] == (((safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_86 , (!((((-3L) || g_63) >= 18446744073709551610UL) ^ g_61[1]))), 0xC3EBA449F347F2DBLL)), l_86.f0)) || g_66) , 1L)), l_86.f0)), l_10[4][2][0])), l_86.f0)) != 0xD4L)), 4)), g_61[1])) >= 0x91BC53C2L) | l_10[2][4][0]))) , g_67[2][0][0]) >= (-8L)))
        { 
            return g_66;
        }
        else
        { 
            uint64_t l_89 = 0x1F07AA3393FF8011LL;
            union U2 l_90 = {-9L};
            int32_t l_100[3];
            int i;
            for (i = 0; i < 3; i++)
                l_100[i] = (-7L);
            for (g_24 = 0; (g_24 <= 0); g_24 += 1)
            { 
                if (g_24)
                    goto lbl_88;
            }
            if (((((0xCCL != ((g_64 |= l_86.f0) , g_40[0])) == ((l_65[0] = (((0xDB463C3EAA4BB8C6LL || g_66) == l_89) <= 0x8604885EL)) != l_89)) | l_86.f0) >= g_44))
            { 
                g_98[1] = (((l_90 , (g_66 = (g_63 && ((((safe_sub_func_uint8_t_u_u((0UL ^ (+(safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(0x2CL, 1)), 2)))), 0xB4L)) ^ g_66) , 0L) != (-8L))))) || 0x8F7B0EADL) ^ l_90.f0);
                l_99 = (-8L);
            }
            else
            { 
                int16_t l_101 = 0xDF22L;
                ++g_102[3][0];
                return g_98[1];
            }
        }
        l_65[0] = ((((((g_67[3][0][0] && 4294967286UL) >= 0x0C4036C8L) , 0xECL) | 255UL) > 0xD095L) > 0x5F9F9906L);
        for (g_66 = 0; (g_66 <= 2); g_66 += 1)
        { 
            uint32_t l_109 = 18446744073709551614UL;
            int32_t l_114 = 0L;
            int32_t l_115 = 0L;
            g_116 = ((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u((l_99 = (g_102[3][0] = ((g_40[0] <= l_109) && (safe_lshift_func_uint8_t_u_u((g_64 = g_98[0]), (safe_lshift_func_int8_t_s_s((l_114 = ((l_86.f0 || l_65[0]) ^ 0x72L)), 7))))))), l_115)) , 0xC81CAAAA389647EDLL), 0x6E71340892DF0D84LL)) ^ 0x2CB49D4AL);
            for (g_62 = 0; (g_62 <= 2); g_62 += 1)
            { 
                const uint64_t l_117 = 0x0A761EAE6C69FB00LL;
                l_114 = l_117;
                if (g_40[0])
                    break;
            }
        }
    }
    for (l_55.f0 = 0; (l_55.f0 >= (-23)); --l_55.f0)
    { 
        int8_t l_134 = 0xFEL;
        int32_t l_174 = 0xBA7C8BBAL;
        if (l_55.f0)
        { 
            uint16_t l_129 = 0xF3F1L;
            union U1 l_130 = {0x13701F4EL};
            int32_t l_132[3];
            int i;
            for (i = 0; i < 3; i++)
                l_132[i] = 0x85ED08B2L;
            for (l_51 = 11; (l_51 > 52); ++l_51)
            { 
                int32_t l_131 = 0xC00A24D0L;
                uint64_t l_146[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_146[i] = 18446744073709551614UL;
                g_135 |= (g_66 = ((g_133 &= (~((0xEB4D02DCL & ((safe_mod_func_uint16_t_u_u(((l_132[2] = (0x9BCAL || ((safe_mul_func_int16_t_s_s(((l_129 , (l_130 , g_116)) != g_67[3][0][0]), g_61[2])) != l_131))) , g_66), 0x133EL)) , 4294967295UL)) | l_130.f0))) , l_134));
                g_66 &= ((((safe_div_func_int8_t_s_s((g_24 &= g_61[1]), (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((~(((g_133 || ((g_145 = ((safe_mul_func_int8_t_s_s(0x7EL, l_134)) >= l_129)) || g_133)) && g_98[1]) <= g_61[1])), g_61[0])), 6)))) && l_131) != 0x1DL) != g_98[1]);
                g_66 |= (((g_102[3][0] != 8L) & 65530UL) <= (l_131 && l_146[0]));
            }
        }
        else
        { 
            const uint64_t l_172 = 0UL;
            int32_t l_173 = 1L;
            for (g_64 = (-26); (g_64 > 56); g_64 = safe_add_func_int8_t_s_s(g_64, 1))
            { 
                int16_t l_160 = 0xF9EBL;
                g_66 = (!((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0x5E26L, 0x0CC8L)), 0x2293L)) & (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(0x9DL, 7)), 0xC2C0C57DL)), l_160))));
            }
            g_175 = ((!((g_66 = (((l_174 = ((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(8UL, (safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((((g_62 = (((l_173 ^= (safe_mod_func_uint8_t_u_u((l_10[2][4][0] < g_67[3][0][0]), l_172))) || 0xA106L) | l_172)) & g_64) > 0x6F6121F12B47A6F6LL), g_145)) >= l_134), l_51)))), l_172)) >= l_134)) < l_10[1][0][0]) ^ g_66)) ^ 3L)) || l_134);
            for (g_135 = 0; (g_135 >= 41); g_135 = safe_add_func_uint64_t_u_u(g_135, 1))
            { 
                uint16_t l_192 = 65530UL;
                l_173 = (safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(0UL, 1)) & (safe_lshift_func_uint16_t_u_s((l_192 &= g_61[1]), (g_40[0] && 0xCCF7F129304CBFABLL)))), g_40[0])) || 4294967295UL), 0x065D452AL)), l_134)) < l_172) || 18446744073709551607UL) && l_10[0][0][0]) || l_173), 0x24A6L)), g_116));
            }
        }
    }
    return g_63;
}



static int8_t  func_8(uint32_t  p_9)
{ 
    const union U2 l_18 = {0x6B719D87L};
    struct S0 l_23 = {6L,0xDC10L};
    for (p_9 = 0; (p_9 == 55); p_9 = safe_add_func_uint64_t_u_u(p_9, 5))
    { 
        uint16_t l_34[4][1][5] = {{{0xCFF2L,0x1494L,0xA183L,0x1494L,0xCFF2L}},{{0xCFF2L,0x1494L,0xA183L,0x1494L,0xCFF2L}},{{0xCFF2L,0x1494L,0xA183L,0x1494L,0xCFF2L}},{{0xCFF2L,0x1494L,0xA183L,0x1494L,0xCFF2L}}};
        int32_t l_43 = 0L;
        struct S0 l_46 = {0xE1F91674L,4UL};
        int i, j, k;
        if ((((safe_lshift_func_int16_t_s_s((p_9 <= (((safe_unary_minus_func_uint8_t_u(((g_7.f0 >= (safe_mod_func_int64_t_s_s(g_7.f0, (l_18 , 0x3B0A6D0811FC80AELL)))) ^ 1L))) && p_9) , g_7.f0)), 10)) || p_9) || l_18.f1))
        { 
            uint32_t l_28[1];
            int i;
            for (i = 0; i < 1; i++)
                l_28[i] = 0xCB090AECL;
            l_28[0] &= func_19(g_7.f0, l_23, l_23);
        }
        else
        { 
            int32_t l_31 = 1L;
            struct S0 l_45 = {0x18AD385EL,1UL};
            g_47 = (safe_div_func_int8_t_s_s(l_31, ((safe_mul_func_int16_t_s_s((l_34[2][0][0] , 5L), func_19((g_44 = (l_43 = func_35((g_40[0] = (safe_mul_func_uint8_t_u_u(0xB1L, l_31))), p_9))), l_45, l_46))) ^ g_24)));
        }
    }
    return g_40[0];
}



static int32_t  func_19(int64_t  p_20, struct S0  p_21, struct S0  p_22)
{ 
    uint64_t l_25 = 0x1E7BF5CBF7935DB5LL;
    ++l_25;
    return l_25;
}



static int64_t  func_35(uint8_t  p_36, uint16_t  p_37)
{ 
    int16_t l_41 = (-1L);
    int32_t l_42 = 0x6A36042CL;
    l_42 = (l_41 && p_36);
    return g_24;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);

    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_67[i][j][k], "g_67[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_98[i], "g_98[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_102[i][j], "g_102[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
