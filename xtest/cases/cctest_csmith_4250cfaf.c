// SPDX-License-Identifier: MIT
// cctest_csmith_4250cfaf.c --- cctest case csmith_4250cfaf (csmith seed 1112592303)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa87b4906 */
/* @exp_ticks 0xb504 */

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

// Options:   -s 1112592303 -o /tmp/csmith_gen_l80u8z49/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int8_t  f0;
   uint64_t  f1;
   int32_t  f2;
   int32_t  f3;
   uint32_t  f4;
};

union U1 {
   const struct S0  f0;
};

union U2 {
   struct S0  f0;
   struct S0  f1;
};

union U3 {
   uint16_t  f0;
};

union U4 {
   const struct S0  f0;
};


static int32_t g_26 = 6L;
static const int32_t *g_25 = &g_26;
static uint16_t g_36 = 0x22E7L;
static uint32_t g_39 = 18446744073709551615UL;
static int8_t g_62[1] = {0x27L};
static int32_t *g_64 = (void*)0;
static int32_t **g_63 = &g_64;
static int32_t **g_69 = &g_64;
static uint8_t g_76 = 0x54L;
static struct S0 g_77 = {0xC6L,0x8A9B06ECFB4391DALL,-8L,-1L,1UL};
static union U3 g_107 = {0UL};
static union U3 *g_106[1] = {&g_107};
static uint16_t g_109 = 0x676CL;
static uint8_t g_133 = 1UL;
static union U2 g_144 = {{0xF2L,0UL,0x75827F4EL,0x6039F823L,0x191EB41DL}};
static int64_t g_153 = (-1L);
static union U4 g_154 = {{-4L,18446744073709551613UL,1L,0L,0x2CD2BE79L}};
static int32_t g_167 = 0L;
static uint32_t g_179 = 0xAE8A4FEBL;
static int16_t g_205 = 0x8AF3L;
static int32_t g_206 = 0x8DA17758L;
static int32_t g_210[2] = {0x3177101AL,0x3177101AL};
static struct S0 g_228 = {2L,0xFBF2FC5D0FD5C3F4LL,0xAB875EE4L,0xD0D3E91AL,0x1D5EAB3FL};
static union U1 g_232 = {{8L,18446744073709551610UL,0x03DEE0DAL,-1L,0x9A50AA0BL}};
static int32_t *g_298 = &g_77.f2;
static int32_t g_320 = (-9L);
static int32_t ***g_342 = (void*)0;
static int8_t **g_410 = (void*)0;
static uint64_t *g_437[7] = {&g_228.f1,&g_228.f1,&g_77.f1,&g_228.f1,&g_228.f1,&g_77.f1,&g_228.f1};
static uint64_t **g_436 = &g_437[0];
static union U1 g_457[7][1][2] = {{{{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}},{{0xF2L,18446744073709551615UL,0xAB9E2B43L,0xC47E36B4L,0xCDAE556BL}}}},{{{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}},{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}}}},{{{{0xF2L,18446744073709551615UL,0xAB9E2B43L,0xC47E36B4L,0xCDAE556BL}},{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}}}},{{{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}},{{0xF2L,18446744073709551615UL,0xAB9E2B43L,0xC47E36B4L,0xCDAE556BL}}}},{{{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}},{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}}}},{{{{0xF2L,18446744073709551615UL,0xAB9E2B43L,0xC47E36B4L,0xCDAE556BL}},{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}}}},{{{{-5L,0xBC316DBC8E60759ELL,0x1C2A432EL,5L,0UL}},{{0xF2L,18446744073709551615UL,0xAB9E2B43L,0xC47E36B4L,0xCDAE556BL}}}}};
static uint32_t g_556[5][3] = {{18446744073709551612UL,0x2FB12787L,18446744073709551612UL},{0x2DFE6C2CL,0x2DFE6C2CL,0x2DFE6C2CL},{18446744073709551612UL,0x2FB12787L,18446744073709551612UL},{0x2DFE6C2CL,0x2DFE6C2CL,0x2DFE6C2CL},{18446744073709551612UL,0x2FB12787L,18446744073709551612UL}};
static int32_t ****g_569 = &g_342;
static int32_t *****g_568 = &g_569;
static uint32_t *g_628 = &g_77.f4;
static uint32_t **g_627 = &g_628;
static uint32_t ***g_626 = &g_627;
static uint32_t * const *g_736 = (void*)0;
static uint32_t * const **g_735 = &g_736;
static uint32_t * const ***g_734 = &g_735;
static uint8_t *g_803 = (void*)0;
static struct S0 *g_818[7][3] = {{&g_144.f0,&g_144.f0,&g_144.f0},{&g_228,&g_228,&g_228},{&g_144.f0,&g_144.f0,&g_144.f0},{&g_228,&g_228,&g_228},{&g_144.f0,&g_144.f0,&g_144.f0},{&g_228,&g_228,&g_228},{&g_144.f0,&g_144.f0,&g_144.f0}};
static const uint32_t g_827 = 0x45ED749EL;
static struct S0 *g_828[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U2 g_972 = {{0L,0xB4824AFCF032FF01LL,0x0C6C478FL,7L,4294967291UL}};
static int32_t g_988 = 1L;
static union U4 g_1027 = {{0x29L,0x5BDD68A1CCBF6D8DLL,0x81E05A22L,0x38E8342BL,0xC2EEC942L}};
static union U4 *g_1026[5] = {&g_1027,&g_1027,&g_1027,&g_1027,&g_1027};
static union U4 g_1028 = {{7L,0x90E7DE09B8D2E938LL,0x2A9FA635L,1L,0x6E75F58BL}};
static struct S0 **g_1032 = &g_828[0];
static struct S0 ** const *g_1031 = &g_1032;
static struct S0 ** const **g_1030 = &g_1031;
static const int32_t **g_1088 = &g_25;
static int64_t g_1148[5] = {0x5E711939FC02C2FCLL,0x5E711939FC02C2FCLL,0x5E711939FC02C2FCLL,0x5E711939FC02C2FCLL,0x5E711939FC02C2FCLL};
static union U3 * const *g_1188 = &g_106[0];
static const struct S0 *g_1258 = &g_144.f0;
static const struct S0 **g_1257[1] = {&g_1258};
static uint32_t ** const *g_1279 = (void*)0;
static union U1 g_1302[4] = {{{0xD5L,0xE330AF8E1DA89C6ELL,-10L,0xF85AF997L,0x3D2471CEL}},{{0xD5L,0xE330AF8E1DA89C6ELL,-10L,0xF85AF997L,0x3D2471CEL}},{{0xD5L,0xE330AF8E1DA89C6ELL,-10L,0xF85AF997L,0x3D2471CEL}},{{0xD5L,0xE330AF8E1DA89C6ELL,-10L,0xF85AF997L,0x3D2471CEL}}};
static int16_t *g_1319 = &g_205;
static int16_t ** const g_1318 = &g_1319;
static int16_t ** const * const g_1317 = &g_1318;
static int16_t g_1391 = 0xC214L;



static uint16_t  func_1(void);
static int32_t * func_2(const int32_t * p_3, int32_t * const  p_4, uint8_t  p_5, union U4  p_6);
static union U2  func_7(union U4  p_8);
static union U4  func_9(union U2  p_10, uint32_t  p_11);
static union U2  func_12(union U1  p_13, int64_t  p_14, uint16_t  p_15, struct S0  p_16, int64_t  p_17);
static union U1  func_18(uint32_t  p_19, const int32_t * p_20, const int8_t  p_21, int32_t * p_22, int32_t * p_23);
static int32_t ** const ** func_46(uint16_t  p_47, uint32_t  p_48, int32_t *** p_49);
static union U3  func_50(uint16_t  p_51, int16_t  p_52);




static uint16_t  func_1(void)
{ 
    uint16_t l_24 = 0xCA4EL;
    int32_t *l_27 = &g_26;
    uint32_t l_29 = 2UL;
    struct S0 l_30 = {0xD8L,1UL,9L,-5L,0xE60E7790L};
    union U4 l_1036 = {{-1L,1UL,0x4B5FDACBL,0x282C50C5L,8UL}};
    int32_t **l_1158[6][2][4] = {{{&g_64,(void*)0,(void*)0,&g_64},{(void*)0,(void*)0,&g_64,(void*)0}},{{(void*)0,(void*)0,&g_64,&g_64},{(void*)0,(void*)0,(void*)0,&g_64}},{{&g_64,(void*)0,&g_64,(void*)0},{&g_64,(void*)0,(void*)0,&g_64}},{{(void*)0,(void*)0,&g_64,(void*)0},{(void*)0,(void*)0,&g_64,&g_64}},{{(void*)0,(void*)0,(void*)0,&g_64},{&g_64,(void*)0,&g_64,(void*)0}},{{&g_64,(void*)0,(void*)0,&g_64},{(void*)0,(void*)0,&g_64,(void*)0}}};
    uint8_t *l_1159 = &g_133;
    union U2 l_1162 = {{0x85L,8UL,0L,0x4800B1C2L,0x881D1722L}};
    uint16_t *l_1167 = &g_109;
    int16_t l_1179[1][3][2] = {{{0xC33FL,0xC33FL},{0x6175L,0xC33FL},{0xC33FL,0x6175L}}};
    struct S0 l_1187 = {-1L,18446744073709551615UL,1L,0L,0UL};
    int32_t l_1190 = 0L;
    int32_t l_1250[4][1][4] = {{{0L,1L,6L,1L}},{{1L,0x4B214025L,6L,6L}},{{0L,0L,1L,6L}},{{(-1L),0x4B214025L,(-1L),1L}}};
    struct S0 ** const l_1256 = (void*)0;
    int16_t l_1264 = 4L;
    uint32_t ***l_1273 = &g_627;
    uint32_t ** const *l_1276 = &g_627;
    union U1 l_1288[6] = {{{-4L,18446744073709551615UL,-1L,5L,0UL}},{{-1L,18446744073709551615UL,-8L,1L,0x7C3F3C51L}},{{-1L,18446744073709551615UL,-8L,1L,0x7C3F3C51L}},{{-4L,18446744073709551615UL,-1L,5L,0UL}},{{-1L,18446744073709551615UL,-8L,1L,0x7C3F3C51L}},{{-1L,18446744073709551615UL,-8L,1L,0x7C3F3C51L}}};
    union U1 *l_1301 = &g_1302[1];
    int16_t l_1316[4][1];
    int64_t *l_1355[1][3];
    union U4 l_1369 = {{1L,1UL,0xA1760D1EL,0x76576232L,9UL}};
    union U1 l_1381 = {{0x35L,18446744073709551615UL,0x8A5D2A97L,0xFF3977E5L,0xA5D8809CL}};
    uint32_t l_1392 = 0xCCC27F5AL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1316[i][j] = (-1L);
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1355[i][j] = (void*)0;
    }
    g_298 = (l_27 = func_2((func_7(func_9(func_12(func_18(l_24, g_25, g_26, l_27, &g_26), (g_26 , g_26), l_29, l_30, g_26), g_154.f0.f1)) , l_27), l_27, l_30.f3, l_1036));
    if ((((g_36 |= (((*l_1159) = ((*g_436) != (l_1036 , (*g_436)))) , ((*l_1167) &= (safe_sub_func_int8_t_s_s((l_1036 , 0xABL), 0x3CL))))) < g_228.f2) < 0x21C31E0AL))
    { 
        int8_t l_1180 = 0x19L;
        union U3 * const **l_1189[3][5] = {{&g_1188,&g_1188,&g_1188,&g_1188,&g_1188},{&g_1188,&g_1188,&g_1188,&g_1188,&g_1188},{&g_1188,&g_1188,&g_1188,&g_1188,&g_1188}};
        uint32_t l_1191 = 0xEC134AF1L;
        uint32_t l_1192[1][7] = {{18446744073709551615UL,18446744073709551611UL,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,18446744073709551611UL,18446744073709551615UL}};
        struct S0 l_1193 = {0xE6L,0xD28E17F901CB4C21LL,0x49A60FF7L,-10L,0UL};
        union U2 *l_1197 = &g_144;
        uint16_t l_1201[7] = {0x9CAFL,0x6FC9L,0x9CAFL,0x9CAFL,0x6FC9L,0x9CAFL,0x9CAFL};
        int32_t l_1204 = 1L;
        int32_t l_1205 = 1L;
        union U4 l_1255 = {{-1L,18446744073709551615UL,0xCE9A6BD3L,-7L,1UL}};
        int32_t *l_1270[3][3][2] = {{{&l_1162.f0.f2,&l_1162.f0.f2},{&g_144.f0.f2,&l_1162.f0.f2},{&l_1162.f0.f2,(void*)0}},{{&l_1162.f0.f2,&l_1162.f0.f2},{&g_144.f0.f2,&l_1162.f0.f2},{&l_1162.f0.f2,(void*)0}},{{(void*)0,(void*)0},{&g_144.f0.f2,(void*)0},{(void*)0,(void*)0}}};
        struct S0 l_1287 = {0x32L,18446744073709551615UL,0x9E86AD37L,0xE64D4150L,0x408CFBBDL};
        struct S0 l_1315 = {1L,0x65E0098B7BCE5F07LL,0xD2CBDC0EL,0x4204A3ECL,0x22D756CBL};
        int32_t l_1325 = 2L;
        struct S0 ** const *l_1364 = (void*)0;
        int16_t l_1371[4];
        int32_t *l_1374 = &l_1187.f2;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1371[i] = 0xB649L;
        if ((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(1L, (safe_lshift_func_uint8_t_u_u(g_1027.f0.f1, (+((*l_1159) = (l_1179[0][0][1] == ((l_1180 = (**g_436)) && ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((((g_1028.f0.f0 <= (safe_mod_func_uint16_t_u_u((((g_1188 = (l_1187 , g_1188)) != (void*)0) >= 0x8EAD8232L), l_1190))) ^ l_1180) || l_1180), l_1180)) > l_1191), l_1192[0][1])) || g_144.f0.f3))))))))), g_228.f2)), 2)) > (-6L)), 0xE591L)))
        { 
            struct S0 *l_1194 = &l_1162.f0;
            union U2 *l_1198[3][1][5] = {{{(void*)0,(void*)0,&l_1162,&g_144,(void*)0}},{{&l_1162,&g_144,&g_144,&l_1162,(void*)0}},{{&l_1162,&g_144,&l_1162,&l_1162,&g_144}}};
            int i, j, k;
            (*l_1194) = l_1193;
            for (l_1162.f1.f3 = 0; (l_1162.f1.f3 <= (-14)); --l_1162.f1.f3)
            { 
                return g_144.f0.f0;
            }
            l_1198[0][0][4] = l_1197;
        }
        else
        { 
            int16_t l_1199 = 0xBE9CL;
            int32_t l_1200[7];
            uint32_t l_1206 = 4294967291UL;
            int i;
            for (i = 0; i < 7; i++)
                l_1200[i] = 0L;
            l_1201[3]--;
            l_1193.f2 ^= 0x24AD4C3FL;
            l_1206++;
        }
        if ((1UL == (safe_div_func_uint32_t_u_u(l_1191, l_1193.f1))))
        { 
            union U2 **l_1211 = &l_1197;
            int32_t l_1220 = 0xF14CF599L;
            int32_t l_1236 = (-1L);
            const int32_t *l_1241 = &l_1205;
            const struct S0 ***l_1259 = (void*)0;
            const struct S0 ***l_1260 = &g_1257[0];
            const struct S0 **l_1262 = &g_1258;
            const struct S0 ***l_1261 = &l_1262;
            int16_t *l_1263 = &l_1179[0][0][1];
            (*l_1211) = &l_1162;
            for (l_1204 = 6; (l_1204 >= 0); l_1204 -= 1)
            { 
                const uint32_t l_1221 = 18446744073709551608UL;
                uint32_t l_1222 = 0xDB2FB88DL;
                const int32_t *l_1240[2][3][3] = {{{&g_228.f2,&g_228.f2,(void*)0},{&g_228.f2,&g_228.f2,(void*)0},{&g_228.f2,&g_228.f2,(void*)0}},{{&g_228.f2,&g_228.f2,(void*)0},{&g_228.f2,&g_228.f2,(void*)0},{&g_228.f2,&g_228.f2,&g_228.f2}}};
                int i, j, k;
                if (((((((((**g_734) == (void*)0) <= ((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(((((l_30 , (g_972 , (0L < (g_1028.f0.f1 <= (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_1220 == l_1191) < (**g_436)), g_232.f0.f0)), l_1220)))))) , l_1193.f0) , l_1180) < l_1180), l_1221)) & (-8L)) >= l_1220), l_1221)) != g_1027.f0.f0)) ^ 254UL) > l_1222) >= 0x04F14160L) > 0x9E53EA97F0F2E5D1LL) < l_1220))
                { 
                    g_228.f2 ^= (safe_lshift_func_int8_t_s_u((0xF55C6B227AF9E2E9LL & (safe_mod_func_int64_t_s_s(0x94FDF31DE536B57ELL, g_232.f0.f4))), 5));
                }
                else
                { 
                    uint16_t l_1227 = 2UL;
                    uint8_t *l_1232[1];
                    union U3 l_1233[2] = {{0x37D4L},{0x37D4L}};
                    int8_t *l_1237 = (void*)0;
                    int8_t *l_1238 = (void*)0;
                    int8_t *l_1239 = &g_972.f1.f0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1232[i] = &g_76;
                    l_1227++;
                    g_167 ^= ((safe_mod_func_uint16_t_u_u((((g_77.f0 && ((((l_1220 = ((*l_1159) ^= 0xC4L)) ^ (g_228.f0 = ((*l_1239) = (((l_1233[0] , (g_1028.f0.f4 , (-6L))) <= (safe_lshift_func_int16_t_s_u(1L, 13))) & l_1236)))) >= g_1027.f0.f3) , 6L)) & (*g_25)) > 0L), l_1193.f1)) & 1UL);
                    if (l_1236)
                        break;
                    l_1241 = l_1240[1][2][2];
                }
                if (l_1201[3])
                    continue;
                for (l_1191 = 0; (l_1191 <= 6); l_1191 += 1)
                { 
                    int32_t l_1249 = 9L;
                    int i;
                    g_988 = (safe_mul_func_uint16_t_u_u(g_228.f3, g_26));
                    l_1250[3][0][3] = (safe_mul_func_uint16_t_u_u((--l_1201[l_1191]), (safe_unary_minus_func_uint64_t_u((g_457[2][0][1] , l_1249)))));
                    return l_1193.f3;
                }
            }
            l_1264 = (safe_lshift_func_int16_t_s_s(g_210[1], ((*l_1263) = (safe_add_func_int16_t_s_s((((l_1255 , l_1256) != ((*l_1261) = ((*l_1260) = g_1257[0]))) < (g_153 | (&g_1027 == (void*)0))), g_457[2][0][1].f0.f3)))));
            return g_457[2][0][1].f0.f2;
        }
        else
        { 
            uint32_t ***l_1275 = (void*)0;
            union U2 l_1294 = {{0x5DL,1UL,0xC209A61EL,0xCEFB43C4L,0x6E6D0B64L}};
            union U4 l_1295[3] = {{{1L,0xBE8F8ADE829A2AB8LL,1L,-9L,4294967295UL}},{{1L,0xBE8F8ADE829A2AB8LL,1L,-9L,4294967295UL}},{{1L,0xBE8F8ADE829A2AB8LL,1L,-9L,4294967295UL}}};
            uint16_t l_1307 = 65535UL;
            int32_t l_1328[1];
            int32_t l_1335 = 9L;
            uint32_t l_1337 = 18446744073709551615UL;
            uint8_t l_1357 = 0x7EL;
            const int32_t *l_1368[2][4][3] = {{{&l_1193.f2,&l_1193.f2,&l_1193.f2},{&g_228.f2,&g_228.f2,&g_228.f2},{&l_1193.f2,&l_1193.f2,&l_1193.f2},{&g_228.f2,&g_228.f2,&g_228.f2}},{{&l_1193.f2,&l_1193.f2,&l_1193.f2},{&g_228.f2,&g_228.f2,&g_228.f2},{&l_1193.f2,&l_1193.f2,&l_1193.f2},{&g_228.f2,&g_228.f2,&g_228.f2}}};
            const int32_t *l_1370 = (void*)0;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1328[i] = 0L;
            for (g_972.f1.f2 = (-14); (g_972.f1.f2 >= 16); g_972.f1.f2 = safe_add_func_int16_t_s_s(g_972.f1.f2, 7))
            { 
                uint32_t ****l_1274[4][7] = {{(void*)0,&g_626,&g_626,(void*)0,&l_1273,(void*)0,&g_626},{&g_626,&g_626,&g_626,&g_626,&g_626,&g_626,&g_626},{(void*)0,&g_626,(void*)0,&g_626,(void*)0,(void*)0,&g_626},{&g_626,&g_626,&g_626,&g_626,&g_626,&g_626,&g_626}};
                uint32_t ** const **l_1277 = (void*)0;
                uint32_t ** const **l_1278[5][7] = {{(void*)0,&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276,&l_1276},{&l_1276,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,&l_1276},{(void*)0,&l_1276,&l_1276,(void*)0,&l_1276,&l_1276,(void*)0}};
                int32_t l_1280 = (-2L);
                int32_t *l_1289 = &l_1205;
                int i, j;
                for (l_1162.f0.f1 = (-14); (l_1162.f0.f1 > 33); l_1162.f0.f1 = safe_add_func_int64_t_s_s(l_1162.f0.f1, 4))
                { 
                    int32_t *l_1269 = (void*)0;
                    l_1270[2][2][0] = l_1269;
                }
                g_988 = ((0xC4BBL >= (safe_mod_func_uint32_t_u_u((18446744073709551608UL > ((l_1275 = l_1273) != (g_1279 = l_1276))), l_1280))) && (safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((***g_1279) = (safe_div_func_uint32_t_u_u((g_133 >= ((l_1287 , 0UL) && (**g_627))), 0xCD4855D9L))), l_1280)), 6)));
                (*g_63) = (l_1288[0] , l_1289);
            }
            g_210[1] = 1L;
            for (l_1193.f1 = 0; (l_1193.f1 != 52); l_1193.f1++)
            { 
                union U2 l_1298[2] = {{{0L,2UL,0xADF4AAF6L,-1L,0x32CC1399L}},{{0L,2UL,0xADF4AAF6L,-1L,0x32CC1399L}}};
                uint32_t l_1299[7][5] = {{0xC0908D91L,1UL,0x8A096F2AL,0x21B64595L,18446744073709551607UL},{0xC0908D91L,18446744073709551607UL,0x73E8BCEFL,0xD7BE231CL,0xD7BE231CL},{0x21B64595L,0x44FF61ECL,0x21B64595L,1UL,18446744073709551607UL},{18446744073709551614UL,0xD7BE231CL,18446744073709551607UL,1UL,0x21B64595L},{18446744073709551607UL,0x73E8BCEFL,0xD7BE231CL,0xD7BE231CL,0x73E8BCEFL},{0x73E8BCEFL,0x69811E1AL,18446744073709551607UL,0x21B64595L,0x8A096F2AL},{0x44FF61ECL,0x69811E1AL,0x21B64595L,18446744073709551613UL,0x662DD607L}};
                int32_t l_1329 = 0xB93E86A8L;
                int32_t l_1332 = 0x95C307EBL;
                int32_t l_1333 = 6L;
                int32_t l_1336 = 0x2680D04BL;
                union U4 l_1367 = {{0x8AL,0x73572382132EAC6BLL,0L,3L,0xF722DBD7L}};
                int i, j;
                if ((safe_div_func_uint8_t_u_u((&g_1026[3] == ((l_1295[1] , (g_232 , g_457[2][0][1].f0.f1)) , &g_1026[2])), 1L)))
                { 
                    union U1 *l_1300 = &l_1288[0];
                    int8_t l_1303[7][2][4] = {{{8L,2L,8L,2L},{8L,2L,8L,2L}},{{8L,2L,8L,2L},{8L,2L,8L,2L}},{{8L,2L,8L,2L},{8L,2L,8L,2L}},{{8L,2L,8L,2L},{8L,2L,8L,2L}},{{8L,2L,8L,2L},{8L,2L,8L,2L}},{{8L,2L,8L,2L},{8L,2L,8L,2L}},{{8L,2L,8L,2L},{8L,2L,8L,2L}}};
                    int i, j, k;
                    l_1299[2][4] = (safe_add_func_int16_t_s_s((((((void*)0 == (*g_735)) != (0x9AC716B9L != 0x0A8B619DL)) <= ((***g_626) , ((l_1036 , l_1294.f0.f4) != 0L))) <= 0UL), 0L));
                    l_1301 = l_1300;
                    return l_1303[5][1][1];
                }
                else
                { 
                    uint32_t l_1304[1][7][2];
                    int64_t *l_1310 = &g_1148[2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1304[i][j][k] = 0x98254BBFL;
                        }
                    }
                    g_144.f1.f2 = (((((l_1304[0][0][0] && (l_1298[1].f0.f2 ^= (safe_mod_func_int32_t_s_s(8L, l_1307)))) >= ((safe_mod_func_uint64_t_u_u(l_1295[1].f0.f1, ((*l_1310) = g_1027.f0.f1))) == ((l_1304[0][5][0] >= ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_1304[0][0][0], l_1299[2][4])) != g_167), 0)) && l_1304[0][1][1])) == g_1028.f0.f4))) , l_1315) , l_1316[3][0]) != l_1304[0][0][0]);
                }
                if ((((void*)0 != g_1317) , l_1295[1].f0.f0))
                { 
                    uint32_t l_1320 = 0x9E3B0164L;
                    l_1320++;
                    g_988 = (-7L);
                }
                else
                { 
                    int32_t l_1323 = 0x47A2C475L;
                    int32_t l_1324 = (-6L);
                    int32_t l_1326 = 0x0A0BE2D8L;
                    int32_t l_1327 = (-4L);
                    int32_t l_1330 = 0x9D4ADE40L;
                    int32_t l_1331 = 8L;
                    int32_t l_1334[3];
                    struct S0 *l_1340 = &l_1287;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1334[i] = (-1L);
                    l_1298[1].f0.f2 &= 0xDBF0DE2BL;
                    ++l_1337;
                    (*l_1340) = l_1295[1].f0;
                }
                for (l_1332 = 0; (l_1332 >= 0); l_1332 -= 1)
                { 
                    int64_t *l_1356 = (void*)0;
                    int32_t l_1358[7];
                    int8_t *l_1359 = (void*)0;
                    int8_t *l_1360 = (void*)0;
                    int8_t *l_1361 = &l_30.f0;
                    struct S0 ** const *l_1363[6] = {&l_1256,&l_1256,&l_1256,&l_1256,&l_1256,&l_1256};
                    struct S0 ** const **l_1362[2][6] = {{(void*)0,&g_1031,(void*)0,&g_1031,(void*)0,&g_1031},{(void*)0,&g_1031,(void*)0,&g_1031,(void*)0,&g_1031}};
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_1358[i] = (-8L);
                    l_1328[l_1332] = ((safe_rshift_func_int8_t_s_u(l_1328[l_1332], (l_1287 , (l_1358[6] = ((safe_sub_func_uint64_t_u_u(((***g_1317) || (l_1298[1].f0.f4 != 0x8B89B120E0D10768LL)), (safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((l_1355[0][2] == l_1356) , l_1295[1].f0.f4) && l_1328[l_1332]), 0)), l_1328[l_1332])), g_1028.f0.f1)), l_1357)), l_1294.f0.f4)))) & 0x7BB3BBC834E2BBF7LL))))) || 0xC0D9L);
                    (*g_69) = &l_1358[3];
                }
            }
            l_1371[0] ^= ((**g_436) & (**g_436));
        }
        for (g_972.f1.f0 = 0; (g_972.f1.f0 == 9); g_972.f1.f0 = safe_add_func_uint8_t_u_u(g_972.f1.f0, 4))
        { 
            (*g_63) = l_1374;
        }
    }
    else
    { 
        union U1 *l_1375[3][5] = {{&g_1302[0],&g_1302[3],&g_1302[0],&g_1302[3],&g_1302[0]},{&g_457[2][0][1],&g_457[2][0][1],&g_457[2][0][1],&g_457[2][0][1],&g_457[2][0][1]},{&g_1302[0],&g_1302[3],&g_1302[0],&g_1302[3],&g_1302[0]}};
        union U1 **l_1376 = &l_1301;
        int i, j;
        for (g_972.f0.f1 = 0; g_972.f0.f1 < 1; g_972.f0.f1 += 1)
        {
            g_62[g_972.f0.f1] = 9L;
        }
        (*l_1376) = l_1375[1][2];
        return g_77.f4;
    }
    g_167 &= (safe_mul_func_uint16_t_u_u(((g_232 , 0x1FL) >= (safe_add_func_int64_t_s_s(((((***g_1317) = (((l_1381 , (safe_lshift_func_int8_t_s_s(((((*g_436) = l_1355[0][1]) != l_1355[0][2]) && (safe_add_func_int16_t_s_s((~(safe_sub_func_uint32_t_u_u((((*g_1258) , ((safe_sub_func_uint8_t_u_u(((**g_1318) & g_1028.f0.f3), g_972.f0.f0)) <= 0x97E8L)) , 0UL), g_1391))), (**g_1318)))), g_1148[2]))) == 0xACCFL) ^ (*g_628))) > 1UL) & g_1027.f0.f2), 1UL))), l_1392));
    return g_1028.f0.f1;
}



static int32_t * func_2(const int32_t * p_3, int32_t * const  p_4, uint8_t  p_5, union U4  p_6)
{ 
    int16_t l_1043 = 0xEC38L;
    union U4 l_1044 = {{1L,0UL,1L,0xA5FDC8C8L,4294967288UL}};
    uint16_t *l_1049[6][2] = {{&g_107.f0,&g_107.f0},{&g_107.f0,(void*)0},{&g_107.f0,(void*)0},{&g_107.f0,&g_107.f0},{&g_107.f0,&g_107.f0},{&g_107.f0,&g_107.f0}};
    int32_t l_1050 = 0x3A64D9F1L;
    uint16_t l_1051 = 0xB284L;
    int16_t ** const l_1058 = (void*)0;
    int32_t l_1092 = 0x2550A027L;
    int32_t l_1093 = 0xABB47819L;
    int32_t l_1094 = 0xE4A6245AL;
    int32_t l_1095 = 0L;
    int32_t l_1096 = 8L;
    int32_t l_1097 = 0xD02C6826L;
    int32_t l_1098 = 0x8BCE4E13L;
    int32_t l_1099 = 0xCA04A5BBL;
    int32_t l_1100[3];
    uint16_t l_1105 = 0x7489L;
    union U4 **l_1115[6];
    uint64_t l_1121 = 0x554090067F670108LL;
    int32_t *l_1157 = &l_1096;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1100[i] = 0xE170FB8DL;
    for (i = 0; i < 6; i++)
        l_1115[i] = &g_1026[3];
    l_1050 &= ((g_1027.f0.f1 , 18446744073709551615UL) || (safe_rshift_func_uint8_t_u_u(p_6.f0.f1, (safe_sub_func_uint64_t_u_u((l_1043 && (g_36 = (func_7(l_1044) , (((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_1043, p_6.f0.f4)), p_6.f0.f0)) <= l_1044.f0.f1) < p_6.f0.f0)))), (**g_436))))));
    l_1051 &= l_1044.f0.f0;
    for (g_972.f0.f4 = 0; (g_972.f0.f4 <= 26); g_972.f0.f4 = safe_add_func_int8_t_s_s(g_972.f0.f4, 4))
    { 
        uint16_t l_1081[4][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
        struct S0 l_1085[2][5] = {{{-1L,2UL,0L,0x9F990179L,0x164A49B9L},{-1L,2UL,0L,0x9F990179L,0x164A49B9L},{-1L,2UL,0L,0x9F990179L,0x164A49B9L},{-1L,2UL,0L,0x9F990179L,0x164A49B9L},{-1L,2UL,0L,0x9F990179L,0x164A49B9L}},{{0L,18446744073709551610UL,0x7A7296C8L,0L,4UL},{0L,18446744073709551610UL,0x7A7296C8L,0L,4UL},{0L,18446744073709551610UL,0x7A7296C8L,0L,4UL},{0L,18446744073709551610UL,0x7A7296C8L,0L,4UL},{0L,18446744073709551610UL,0x7A7296C8L,0L,4UL}}};
        int32_t l_1101 = 0L;
        int32_t l_1102 = 0xBC8AA470L;
        int32_t l_1104[6][5] = {{0x1648883BL,0x65F29211L,0x65F29211L,0x1648883BL,0x65F29211L},{(-9L),(-9L),0x88158FDBL,(-9L),(-9L)},{0x65F29211L,0x1648883BL,0x65F29211L,0x65F29211L,0x1648883BL},{(-9L),0xF5C0393EL,0xF5C0393EL,(-9L),0xF5C0393EL},{0x1648883BL,0x1648883BL,0x13837560L,0x1648883BL,0x1648883BL},{0xF5C0393EL,(-9L),0xF5C0393EL,0xF5C0393EL,(-9L)}};
        union U4 **l_1113[5] = {&g_1026[1],&g_1026[1],&g_1026[1],&g_1026[1],&g_1026[1]};
        uint8_t * const l_1118 = (void*)0;
        uint16_t l_1151 = 65535UL;
        int i, j;
        for (g_228.f3 = 25; (g_228.f3 > 18); --g_228.f3)
        { 
            for (g_206 = 25; (g_206 < 18); g_206 = safe_sub_func_int64_t_s_s(g_206, 7))
            { 
                int16_t ***l_1059 = (void*)0;
                int16_t *l_1062 = &g_205;
                int16_t **l_1061 = &l_1062;
                int16_t ***l_1060[3][3][4];
                int16_t ***l_1063 = &l_1061;
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1060[i][j][k] = &l_1061;
                    }
                }
                (*l_1063) = l_1058;
                if ((*g_298))
                    break;
            }
            (*g_298) = ((*p_4) ^= (~p_6.f0.f4));
            (*g_298) |= 0x4BF9E88CL;
        }
        for (g_153 = 0; (g_153 <= (-5)); --g_153)
        { 
            int8_t ***l_1076 = &g_410;
            int8_t ****l_1075 = &l_1076;
            const int16_t l_1082 = 0x0DE1L;
            int32_t l_1090 = 6L;
            int32_t l_1091[6][2] = {{0xC27FCFB7L,0xC27FCFB7L},{1L,0xC27FCFB7L},{0xC27FCFB7L,1L},{0xC27FCFB7L,0xC27FCFB7L},{1L,0xC27FCFB7L},{0xC27FCFB7L,1L}};
            uint8_t *l_1117[6] = {&g_133,&g_133,&g_76,&g_133,&g_133,&g_76};
            int32_t *l_1152 = (void*)0;
            int32_t *l_1153[7][3][2] = {{{&l_1104[4][1],&l_1104[5][0]},{&g_144.f0.f2,&g_144.f0.f2},{&g_144.f0.f2,&l_1104[5][0]}},{{&l_1104[4][1],&g_210[1]},{&l_1104[5][0],&g_210[1]},{&l_1104[4][1],&l_1104[5][0]}},{{&g_144.f0.f2,&g_144.f0.f2},{&g_144.f0.f2,&l_1104[5][0]},{&l_1104[4][1],&g_210[1]}},{{&l_1104[5][0],&g_210[1]},{&l_1104[4][1],&l_1104[5][0]},{&g_144.f0.f2,&g_144.f0.f2}},{{&g_144.f0.f2,&l_1104[5][0]},{&l_1104[4][1],&g_210[1]},{&l_1104[5][0],&g_210[1]}},{{&l_1104[4][1],&l_1104[5][0]},{&g_144.f0.f2,&g_144.f0.f2},{&g_144.f0.f2,&l_1104[5][0]}},{{&l_1104[4][1],&g_210[1]},{&l_1104[5][0],&g_210[1]},{&l_1104[4][1],&l_1104[5][0]}}};
            uint32_t l_1154 = 0x0791AD83L;
            int i, j, k;
            if (((p_6.f0.f1 <= (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(g_154.f0.f0, ((((l_1075 == (void*)0) , p_5) >= ((safe_lshift_func_int8_t_s_s(((-9L) & (safe_add_func_uint64_t_u_u(l_1044.f0.f0, (**g_436)))), 4)) >= l_1081[3][0])) ^ 4294967287UL))), l_1051)) ^ l_1081[2][2]) < 0x7B8D8CBEL), 3)) && l_1082), l_1081[1][0]))) < g_39))
            { 
                int32_t *l_1089[4] = {&g_988,&g_988,&g_988,&g_988};
                int32_t l_1103 = 0xB9399B0BL;
                int i;
                for (g_228.f3 = 0; (g_228.f3 < 11); g_228.f3 = safe_add_func_uint8_t_u_u(g_228.f3, 6))
                { 
                    const int32_t **l_1087 = (void*)0;
                    const int32_t ***l_1086[3][6][3] = {{{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{(void*)0,&l_1087,&l_1087}},{{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,(void*)0}},{{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,&l_1087},{&l_1087,&l_1087,(void*)0}}};
                    int i, j, k;
                    l_1085[1][0] = l_1085[1][0];
                    if ((*p_4))
                        break;
                    g_1088 = &p_3;
                    return l_1089[3];
                }
                l_1105++;
                for (g_206 = (-30); (g_206 >= 27); g_206 = safe_add_func_int8_t_s_s(g_206, 1))
                { 
                    int32_t *l_1110[1][7] = {{&g_228.f2,(void*)0,(void*)0,&g_228.f2,(void*)0,(void*)0,&g_228.f2}};
                    int i, j;
                    return l_1110[0][1];
                }
            }
            else
            { 
                union U4 ***l_1114[2][7][4] = {{{&l_1113[4],&l_1113[2],&l_1113[2],(void*)0},{&l_1113[2],&l_1113[0],&l_1113[0],&l_1113[1]},{&l_1113[0],&l_1113[1],&l_1113[1],&l_1113[0]},{&l_1113[2],&l_1113[2],(void*)0,&l_1113[2]},{&l_1113[4],&l_1113[2],&l_1113[1],&l_1113[2]},{(void*)0,&l_1113[2],&l_1113[2],&l_1113[2]},{&l_1113[2],&l_1113[2],&l_1113[0],&l_1113[2]}},{{&l_1113[2],&l_1113[2],&l_1113[4],&l_1113[0]},{&l_1113[2],&l_1113[1],&l_1113[2],&l_1113[1]},{&l_1113[4],&l_1113[0],&l_1113[0],(void*)0},{&l_1113[3],&l_1113[2],&l_1113[2],&l_1113[1]},{&l_1113[2],&l_1113[2],&l_1113[0],&l_1113[2]},{&l_1113[2],&l_1113[2],&l_1113[2],&l_1113[0]},{&l_1113[3],&l_1113[2],&l_1113[0],&l_1113[4]}}};
                uint8_t **l_1116 = (void*)0;
                int32_t l_1127 = (-1L);
                uint64_t l_1137 = 18446744073709551610UL;
                int64_t *l_1146 = (void*)0;
                int64_t *l_1147 = &g_1148[2];
                int i, j, k;
                if ((safe_mul_func_int8_t_s_s((&g_1026[3] != (l_1115[5] = l_1113[2])), (l_1091[4][0] ^= ((l_1117[0] = &g_76) != l_1118)))))
                { 
                    int32_t *l_1119 = &g_144.f1.f2;
                    int32_t *l_1120[1][7] = {{&l_1094,&l_1094,&l_1094,&l_1094,&l_1094,&l_1094,&l_1094}};
                    union U2 *l_1124[3][4][7] = {{{&g_972,&g_144,&g_972,(void*)0,&g_972,&g_144,&g_972},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_972,&g_144,&g_144,&g_144,&g_972},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}},{{&g_972,(void*)0,&g_972,&g_144,&g_972,(void*)0,&g_972},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,(void*)0,&g_972,(void*)0,&g_144,(void*)0,&g_972},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}},{{&g_972,&g_144,&g_972,(void*)0,&g_972,&g_144,&g_972},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144},{&g_144,&g_144,&g_972,&g_144,&g_144,&g_144,&g_972},{&g_144,&g_144,&g_144,&g_144,&g_144,&g_144,&g_144}}};
                    union U2 **l_1125 = &l_1124[2][3][0];
                    int i, j, k;
                    l_1121--;
                    (*l_1125) = l_1124[2][3][0];
                }
                else
                { 
                    int32_t *l_1126 = &g_77.f2;
                    int32_t *l_1128 = &l_1095;
                    int32_t l_1129 = 0xA8FAFC90L;
                    int32_t *l_1130 = &l_1091[3][0];
                    int32_t *l_1131 = &l_1050;
                    int32_t *l_1132 = &l_1093;
                    int32_t *l_1133 = (void*)0;
                    int32_t *l_1134 = &l_1094;
                    int32_t *l_1135 = &g_210[1];
                    int32_t *l_1136 = &l_1095;
                    struct S0 l_1140 = {-1L,0x7A4A3FFF3D59445DLL,0x0D7B0AC6L,0xDEDD8B6AL,9UL};
                    struct S0 *l_1141 = &g_144.f0;
                    l_1137--;
                    (*l_1141) = (l_1140 = p_6.f0);
                    (*g_1088) = p_3;
                }
                l_1091[5][0] ^= (safe_mul_func_int8_t_s_s((((*p_4) |= l_1102) & (8UL && l_1100[0])), ((safe_mod_func_int64_t_s_s(((*l_1147) |= p_6.f0.f0), (0xBEAF14D647D8406ELL || ((safe_rshift_func_uint8_t_u_s((l_1127 == (p_6.f0.f4 | p_6.f0.f4)), 6)) == p_6.f0.f3)))) | l_1151)));
            }
            l_1154++;
        }
    }
    return &g_210[1];
}



static union U2  func_7(union U4  p_8)
{ 
    int8_t l_1029 = 0L;
    struct S0 ** const ***l_1033 = &g_1030;
    int32_t l_1034 = 0x0E2C8256L;
    union U2 l_1035 = {{0x24L,18446744073709551615UL,-1L,1L,0x36F56B3BL}};
    l_1034 = ((-2L) != (l_1029 >= (((*l_1033) = g_1030) != (void*)0)));
    return l_1035;
}



static union U4  func_9(union U2  p_10, uint32_t  p_11)
{ 
    union U3 **l_185 = &g_106[0];
    int32_t l_188 = 0x7A0B3854L;
    int32_t l_208 = 0x3AFEA6F2L;
    int32_t l_209 = 0L;
    int32_t l_211 = (-1L);
    int32_t l_214 = (-1L);
    int32_t l_216[3][3] = {{0x6C1E38EDL,0x6C1E38EDL,0x6C1E38EDL},{0xEDA3D84FL,0xEDA3D84FL,0xEDA3D84FL},{0x6C1E38EDL,0x6C1E38EDL,0x6C1E38EDL}};
    int64_t l_222[2];
    struct S0 *l_253 = &g_228;
    int32_t *l_299 = (void*)0;
    union U4 l_330 = {{-1L,0x9FB7ABC20F76DA6CLL,0x833983ECL,0xF84908CEL,4294967295UL}};
    int64_t l_331 = 0x669DA2C240B1C1F8LL;
    uint16_t *l_332 = &g_107.f0;
    uint64_t *l_333 = &g_228.f1;
    uint8_t *l_334 = &g_76;
    uint8_t *l_335 = &g_133;
    uint32_t l_336 = 0xD459A4C5L;
    union U1 *l_454 = &g_232;
    union U1 **l_453[7][2][4] = {{{&l_454,(void*)0,(void*)0,&l_454},{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,(void*)0,&l_454},{(void*)0,(void*)0,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454},{&l_454,&l_454,&l_454,&l_454}},{{&l_454,(void*)0,&l_454,&l_454},{&l_454,&l_454,&l_454,(void*)0}},{{&l_454,&l_454,&l_454,(void*)0},{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454},{&l_454,&l_454,&l_454,&l_454}},{{&l_454,&l_454,&l_454,&l_454},{(void*)0,&l_454,(void*)0,&l_454}}};
    uint64_t l_467 = 0x471E7D03FE365464LL;
    int32_t l_490[1][7][5] = {{{5L,0x2A03D9F8L,0x4ACA498FL,(-3L),0x282149EEL},{5L,0x4ACA498FL,(-6L),0x4ACA498FL,5L},{0x2A03D9F8L,(-1L),(-1L),(-3L),0xFD3EF856L},{(-1L),(-1L),0x2A03D9F8L,0x2A03D9F8L,(-1L)},{(-6L),0x4ACA498FL,5L,(-1L),0xFD3EF856L},{0x4ACA498FL,0x2A03D9F8L,5L,0x6AB01959L,5L},{0xFD3EF856L,0xFD3EF856L,0x2A03D9F8L,(-6L),0x282149EEL}}};
    uint8_t l_495 = 0xB1L;
    uint32_t l_531 = 0x19511C74L;
    int16_t l_535 = 0xD6EAL;
    uint16_t l_586 = 0x4DE3L;
    uint32_t l_613 = 4294967295UL;
    uint8_t l_614 = 249UL;
    union U4 *l_625 = (void*)0;
    union U4 * const *l_624[3][7][5] = {{{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,(void*)0},{(void*)0,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625}},{{&l_625,(void*)0,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,(void*)0,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625}},{{(void*)0,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,&l_625},{&l_625,&l_625,&l_625,&l_625,(void*)0}}};
    uint32_t l_641[6];
    uint32_t l_684 = 4294967295UL;
    uint16_t l_711 = 0x816EL;
    uint32_t ****l_783 = &g_626;
    uint32_t *****l_782 = &l_783;
    const uint32_t l_813 = 0x225CFB3DL;
    struct S0 * const **l_836 = (void*)0;
    int64_t l_861 = 0x0DDD778DEB16C7FALL;
    uint8_t l_914[4];
    uint16_t l_973 = 65535UL;
    int32_t *l_1000 = &l_209;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_222[i] = (-1L);
    for (i = 0; i < 6; i++)
        l_641[i] = 0x33F0C5EFL;
    for (i = 0; i < 4; i++)
        l_914[i] = 0xA8L;
    (*l_185) = &g_107;
    for (g_144.f1.f2 = 0; (g_144.f1.f2 == 7); g_144.f1.f2 = safe_add_func_uint64_t_u_u(g_144.f1.f2, 6))
    { 
        int32_t *l_189 = (void*)0;
        int32_t ***l_194 = (void*)0;
        int32_t ****l_193[4][1] = {{&l_194},{&l_194},{&l_194},{&l_194}};
        int32_t *****l_192 = &l_193[3][0];
        int64_t l_221[4] = {1L,1L,1L,1L};
        int16_t l_223 = (-10L);
        uint32_t l_224 = 0x022AB2D0L;
        union U1 *l_231 = &g_232;
        int8_t * const l_246 = (void*)0;
        struct S0 l_251 = {0xBAL,0x0086DD69A5E8C310LL,0L,4L,1UL};
        int32_t *l_300 = &l_211;
        uint64_t l_307 = 0xEA5808736BB284B5LL;
        int i, j;
        if (l_188)
            break;
        p_10.f0.f2 |= ((void*)0 == &l_188);
        for (g_77.f0 = 0; (g_77.f0 >= 0); g_77.f0 -= 1)
        { 
            int32_t *l_195 = &g_77.f2;
            int32_t l_204 = 0x43D89DC9L;
            int32_t l_207[7][7] = {{(-1L),0x6ACB4F6EL,6L,0x6ACB4F6EL,(-1L),0x019E2E31L,0x019E2E31L},{4L,1L,0x6468E3BEL,1L,4L,0x8BE36E89L,0x8BE36E89L},{(-1L),0x6ACB4F6EL,6L,0x6ACB4F6EL,(-1L),0x019E2E31L,0x019E2E31L},{4L,1L,0x6468E3BEL,1L,4L,0x8BE36E89L,0x8BE36E89L},{(-1L),0x6ACB4F6EL,6L,0x6ACB4F6EL,(-1L),0x019E2E31L,0x019E2E31L},{4L,1L,0x6468E3BEL,1L,4L,0x8BE36E89L,0x8BE36E89L},{(-1L),0x6ACB4F6EL,6L,0x6ACB4F6EL,(-1L),0x019E2E31L,0x019E2E31L}};
            int32_t l_217 = 0x05261B61L;
            struct S0 l_229 = {1L,5UL,-3L,0L,0x6C8B0E94L};
            union U2 l_245 = {{0x9CL,0xBAEC8B08591DE52BLL,0x7E91F815L,0x04D51F1DL,4294967288UL}};
            int8_t *l_249 = &l_245.f0.f0;
            int8_t **l_248 = &l_249;
            int8_t ***l_247 = &l_248;
            int16_t l_303 = 0x7B4EL;
            int8_t l_304 = 0x56L;
            int64_t *l_321 = &l_221[0];
            uint8_t *l_322 = &g_76;
            int i, j;
            if ((0x5EL > ((void*)0 != l_189)))
            { 
                uint16_t *l_201 = &g_36;
                int32_t l_202 = 0x9ECC4F20L;
                int32_t l_203 = 0x07F9E03FL;
                int32_t l_212 = 0L;
                int32_t l_213 = 0x2D49E9B3L;
                int32_t l_215 = 8L;
                int32_t l_218 = 0x5880F042L;
                int32_t l_219 = 1L;
                int32_t l_220[5][5][7] = {{{(-1L),0x90350B1FL,0xF0B0F387L,0xEA36B09EL,0x3CEFC9DAL,(-8L),9L},{0x36B78C0FL,0x01F71444L,8L,0xB257F6C4L,0x01F71444L,1L,0x35EB0D30L},{0L,0xEA36B09EL,(-1L),3L,9L,3L,(-1L)},{0xDFE33E59L,0xDFE33E59L,0x40A1BE3DL,0xB257F6C4L,0x36B78C0FL,0xBA769291L,0xDFE33E59L},{(-1L),0x1879B9E3L,0L,0xEA36B09EL,1L,0L,0x3CEFC9DAL}},{{(-1L),0x35EB0D30L,(-1L),1L,0x36B78C0FL,(-1L),0x01F71444L},{0x3CEFC9DAL,0x90350B1FL,0xB39B4082L,0L,9L,9L,9L},{0x4A421410L,1L,1L,0x4A421410L,0x01F71444L,(-1L),0x36B78C0FL},{1L,(-4L),(-1L),8L,0x3CEFC9DAL,0L,1L},{0xDFE33E59L,0x36B78C0FL,0x410D0AFCL,0x36B78C0FL,0xDFE33E59L,0xBA769291L,0x36B78C0FL}},{{(-1L),0xC309F253L,0L,0xEA36B09EL,(-1L),3L,9L},{1L,0x35EB0D30L,8L,8L,0x35EB0D30L,1L,0x01F71444L},{(-1L),0xEA36B09EL,0x589F06A3L,0x4C65A413L,9L,(-8L),0x3CEFC9DAL},{0xDFE33E59L,(-1L),1L,0xB257F6C4L,1L,(-1L),0xDFE33E59L},{1L,0xEA36B09EL,0L,0x1879B9E3L,(-1L),0L,(-1L)}},{{0x4A421410L,0x35EB0D30L,0x14FB18FCL,0x36B78C0FL,0x36B78C0FL,0x14FB18FCL,0x35EB0D30L},{0x3CEFC9DAL,0xC309F253L,0L,0L,1L,0x1879B9E3L,9L},{(-1L),0x36B78C0FL,1L,(-1L),0x35EB0D30L,(-1L),1L},{(-1L),0x1879B9E3L,(-1L),0xC309F253L,0L,0xEA36B09EL,(-1L)},{1L,0x14FB18FCL,0xCAB78EE6L,(-1L),0x40A1BE3DL,0x40A1BE3DL,(-1L)}},{{0xB39B4082L,0L,0xB39B4082L,(-8L),0L,0xA232681DL,7L},{(-1L),(-1L),0x35EB0D30L,0x01F71444L,(-1L),0x4A421410L,(-1L)},{0L,(-8L),0xF0B0F387L,8L,7L,0xA232681DL,0L},{0x40A1BE3DL,1L,0x14FB18FCL,0xCAB78EE6L,(-1L),0x40A1BE3DL,0x40A1BE3DL},{(-1L),3L,9L,3L,(-1L),0xEA36B09EL,0L}}};
                int i, j, k;
                for (g_77.f2 = 0; (g_77.f2 <= 0); g_77.f2 += 1)
                { 
                    int i;
                    if (g_62[g_77.f2])
                        break;
                }
                (*l_195) &= (safe_rshift_func_uint8_t_u_s((((void*)0 != l_192) & (l_195 == (void*)0)), (safe_sub_func_uint16_t_u_u(((-5L) == ((safe_sub_func_uint16_t_u_u(0x6852L, ((*l_201) = ((+0x92315917L) & g_62[g_77.f0])))) == 0x1836CB45L)), g_154.f0.f2))));
                l_224++;
            }
            else
            { 
                struct S0 l_230[2] = {{-9L,18446744073709551611UL,-1L,0x6D83F59FL,4294967295UL},{-9L,18446744073709551611UL,-1L,0x6D83F59FL,4294967295UL}};
                int i;
                for (g_167 = 0; (g_167 <= 6); g_167 += 1)
                { 
                    struct S0 *l_227[5][6] = {{(void*)0,&g_228,(void*)0,&g_228,&g_144.f0,&g_144.f0},{&g_228,(void*)0,(void*)0,&g_228,&g_228,&g_144.f0},{&g_144.f0,&g_228,&g_144.f0,&g_228,&g_144.f0,&g_228},{&g_228,&g_144.f0,&g_228,&g_228,&g_144.f0,&g_228},{(void*)0,&g_228,&g_228,&g_144.f0,&g_228,&g_228}};
                    union U1 **l_233 = &l_231;
                    uint8_t *l_243 = (void*)0;
                    uint8_t *l_244[4][7] = {{&g_76,&g_76,&g_76,&g_76,&g_76,&g_76,&g_76},{&g_133,&g_76,&g_76,&g_133,&g_76,&g_133,&g_76},{&g_133,&g_133,&g_76,&g_76,&g_76,&g_133,&g_133},{&g_133,&g_76,&g_76,&g_76,&g_133,&g_133,&g_76}};
                    int i, j;
                    l_229 = g_144.f0;
                    l_230[1] = ((l_207[g_167][g_167] >= 5L) , (g_228 = g_77));
                    (*l_233) = l_231;
                    g_210[0] |= (((0x1EE840198C85A825LL ^ l_207[g_167][g_167]) && (((*l_195) = ((((&g_106[g_77.f0] == (void*)0) != 1L) <= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(4294967288UL)), (((l_222[g_77.f0] , l_222[(g_77.f0 + 1)]) < 0xAB5F6029253BF1A1LL) & g_154.f0.f4))), 9L)), 0))) | 0xBA5BL)) >= g_154.f0.f2)) & g_77.f4);
                }
            }
            if ((0x98A58966L <= g_144.f0.f0))
            { 
                struct S0 *l_252 = &g_228;
                int32_t l_274 = 0L;
                if (p_10.f0.f2)
                    break;
                if ((&g_62[0] == (l_245 , l_246)))
                { 
                    return g_154;
                }
                else
                { 
                    int8_t ****l_250 = &l_247;
                    struct S0 **l_254[3][6] = {{&l_252,(void*)0,&l_252,&l_252,&l_252,&l_252},{(void*)0,(void*)0,(void*)0,(void*)0,&l_252,&l_252},{(void*)0,(void*)0,&l_252,(void*)0,&l_252,(void*)0}};
                    uint64_t *l_265 = &l_251.f1;
                    uint32_t *l_273 = &g_77.f4;
                    int32_t l_275[2][5] = {{0L,1L,1L,1L,0L},{0L,1L,1L,1L,0L}};
                    int i, j;
                    (*l_250) = l_247;
                    if (l_216[2][0])
                        break;
                    l_251 = g_144.f0;
                    l_252 = (l_253 = l_252);
                    l_275[1][1] ^= ((*l_195) = (0xC0L >= (safe_sub_func_uint64_t_u_u(((18446744073709551615UL | ((safe_lshift_func_uint16_t_u_s((*l_195), (((safe_div_func_int8_t_s_s(0xF0L, 0xECL)) | ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((*l_265)++), (safe_mul_func_int16_t_s_s((((g_228.f2 &= p_10.f0.f0) > ((safe_div_func_int8_t_s_s(((((g_62[g_77.f0] ^= (~(((void*)0 != l_273) == g_144.f0.f0))) != p_11) , (void*)0) == &g_64), p_10.f0.f3)) | g_167)) || p_10.f0.f3), p_10.f0.f4)))), p_10.f0.f4)) != l_274)) | p_10.f0.f4))) <= g_205)) && g_228.f1), g_228.f1))));
                }
            }
            else
            { 
                int8_t l_301[2];
                union U4 l_302 = {{0xD6L,0x7D28365250192E02LL,0x759C2A9BL,-1L,1UL}};
                int32_t l_305 = (-10L);
                int32_t l_306[5][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xCCC55746L,(-2L),0xCCC55746L,(-2L),0xCCC55746L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xCCC55746L,(-2L),0xCCC55746L,(-2L),0xCCC55746L},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_301[i] = 0xEEL;
                for (l_245.f0.f2 = 0; (l_245.f0.f2 <= 0); l_245.f0.f2 += 1)
                { 
                    uint32_t *l_291 = &l_251.f4;
                    int i;
                    (*l_195) &= 0xB2BAF4FBL;
                    if (g_62[g_77.f0])
                        continue;
                    p_10.f0.f2 = (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((((((safe_mul_func_int16_t_s_s(g_228.f4, (~(safe_div_func_int8_t_s_s(p_10.f0.f1, (safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s((p_10.f0.f0 >= ((*l_291)++)), p_11)), ((l_299 = ((((safe_mul_func_int8_t_s_s((((**l_192) = &g_63) == (((safe_sub_func_uint32_t_u_u((0xA95CA0F4L >= (4294967295UL ^ g_144.f0.f3)), 0x59C0E3BDL)) || p_10.f0.f4) , (void*)0)), 3UL)) , (void*)0) == &l_195) , g_298)) != l_300))), g_228.f4))))))) || l_301[1]) != g_109) > 0xD9L) <= p_10.f0.f3) , g_144) , 0xFA79L), 10)) , 255UL), 7));
                    return l_302;
                }
                l_307--;
                if (p_10.f0.f1)
                    break;
                (*g_69) = &l_305;
            }
            if ((*l_300))
                continue;
            if (p_10.f0.f3)
                break;
            (*l_195) = (safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((((*l_322) = (((((safe_lshift_func_int16_t_s_u(((((*l_300) >= ((**l_248) = 1L)) && (p_10.f0.f0 != p_10.f0.f3)) <= ((g_154.f0.f0 == (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((p_10.f0.f0 , (((g_320 , (void*)0) == (void*)0) , p_10.f0.f2)), g_232.f0.f1)) > 0xFFE95DC11936E400LL), (-1L)))) > (*l_300))), g_77.f0)) , l_321) != &l_221[0]) & 0x83L) >= g_154.f0.f1)) >= 0UL), g_144.f0.f3)) , g_228.f1), 3));
        }
    }
    if ((((*l_334) |= (g_144 , l_336)) > g_232.f0.f2))
    { 
        uint8_t l_337 = 255UL;
        int32_t ***l_341 = &g_63;
        const int32_t **l_344 = &g_25;
        const int32_t ***l_343 = &l_344;
        const int32_t ****l_345 = &l_343;
        uint64_t *l_368 = &g_77.f1;
        union U3 l_381[2][4][1] = {{{{0x226BL}},{{0x226BL}},{{65535UL}},{{0x226BL}}},{{{0x226BL}},{{65535UL}},{{0x226BL}},{{0x226BL}}}};
        int8_t *l_412 = &g_62[0];
        int8_t **l_411 = &l_412;
        const union U4 l_433 = {{-5L,0UL,0x5616F7F0L,0L,7UL}};
        union U1 *l_455 = &g_232;
        int32_t l_458 = 0xD4434E24L;
        int32_t l_462[1][7] = {{0L,0x125B7EC4L,0L,0L,0x125B7EC4L,0L,0L}};
        uint32_t l_481 = 18446744073709551612UL;
        int32_t l_494[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_494[i] = 0x705CEEBBL;
        (*g_298) &= l_337;
        p_10.f0.f2 |= (*g_25);
    }
    else
    { 
        int32_t l_534[1][7][5] = {{{(-1L),0x2238D70BL,(-1L),(-1L),0x2238D70BL},{0x2238D70BL,4L,(-1L),(-6L),(-1L)},{0L,4L,(-6L),0L,0x6214C65AL},{(-1L),1L,1L,(-1L),0L},{0x65D28072L,0x2238D70BL,0x6214C65AL,0xD0374A0FL,0L},{1L,0x65D28072L,0xE4899CB1L,0L,0xE4899CB1L},{0L,0L,0L,0xD0374A0FL,0x6214C65AL}}};
        int i, j, k;
        for (g_77.f4 = 0; (g_77.f4 <= 0); g_77.f4 += 1)
        { 
            for (g_144.f1.f4 = 0; (g_144.f1.f4 <= 0); g_144.f1.f4 += 1)
            { 
                uint16_t l_536 = 0UL;
                int i;
                for (g_153 = 0; (g_153 >= 0); g_153 -= 1)
                { 
                    int32_t *l_532 = &g_26;
                    int32_t *l_533[6] = {(void*)0,&l_188,(void*)0,(void*)0,&l_188,(void*)0};
                    int i;
                    ++l_536;
                }
                if (g_62[g_77.f4])
                    continue;
                if (p_10.f0.f0)
                    break;
            }
        }
    }
    for (g_179 = 0; (g_179 > 24); g_179 = safe_add_func_int64_t_s_s(g_179, 5))
    { 
        int32_t l_554 = (-1L);
        int32_t **** const l_555 = (void*)0;
        uint8_t l_615 = 255UL;
        int32_t *l_666 = &l_216[1][0];
        uint32_t ***l_698 = &g_627;
        int32_t l_699 = (-10L);
        uint8_t l_701[1];
        const struct S0 l_737 = {-2L,0x3FAC5BE4CB96909ELL,0xAA7F3107L,0xEBBC2216L,0UL};
        int32_t l_769 = (-1L);
        uint64_t ***l_793 = &g_436;
        union U1 **l_798 = &l_454;
        uint8_t *l_805 = &g_133;
        union U4 l_812 = {{0x67L,0x265AA0382FBF15A4LL,-10L,0L,1UL}};
        int32_t l_860 = 0L;
        int32_t l_862 = 1L;
        int32_t l_863 = 0x868DC890L;
        int32_t l_864 = 0L;
        int32_t l_865 = 0xB3F6E6DEL;
        int32_t l_866[2][3][3] = {{{(-1L),0xFC89E0A4L,(-1L)},{0L,0L,7L},{(-1L),0xFC89E0A4L,(-1L)}},{{0L,7L,7L},{(-1L),0xFC89E0A4L,(-1L)},{0L,0L,7L}}};
        int16_t *l_874 = &g_205;
        uint16_t l_947 = 1UL;
        uint8_t l_962 = 0x9AL;
        int64_t *l_965 = &l_331;
        int8_t *l_968 = (void*)0;
        int8_t *l_969 = &g_144.f0.f0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_701[i] = 0xB2L;
    }
    return g_1028;
}



static union U2  func_12(union U1  p_13, int64_t  p_14, uint16_t  p_15, struct S0  p_16, int64_t  p_17)
{ 
    int32_t l_34[6] = {(-1L),6L,(-1L),(-1L),6L,(-1L)};
    union U3 l_53[3][1][4] = {{{{65530UL},{2UL},{0xD567L},{2UL}}},{{{2UL},{65531UL},{0xD567L},{0xD567L}}},{{{65530UL},{65530UL},{2UL},{0xD567L}}}};
    union U2 l_115 = {{0xB8L,0x9D152B013A5848C3LL,0x732C9520L,0xBB7C98E3L,4294967289UL}};
    union U1 l_121[4] = {{{-9L,0xC37BB759A07A57FBLL,9L,0x2289BD9EL,0UL}},{{-9L,0xC37BB759A07A57FBLL,9L,0x2289BD9EL,0UL}},{{-9L,0xC37BB759A07A57FBLL,9L,0x2289BD9EL,0UL}},{{-9L,0xC37BB759A07A57FBLL,9L,0x2289BD9EL,0UL}}};
    int32_t **l_130 = &g_64;
    struct S0 l_178 = {-3L,0x1B2A3807ABEAB5F9LL,0L,0xCF5DE515L,0x066C0364L};
    struct S0 *l_183 = &l_178;
    int32_t *l_184 = &g_167;
    int i, j, k;
    for (p_16.f4 = (-2); (p_16.f4 <= 19); p_16.f4++)
    { 
        int32_t *l_33[4] = {&g_26,&g_26,&g_26,&g_26};
        int32_t l_35 = 0xD574417FL;
        int32_t **l_43 = (void*)0;
        int32_t ***l_42 = &l_43;
        int64_t l_161 = 0xBE4861E4F3C4D6EFLL;
        int i;
        g_36++;
        g_39++;
        (*l_42) = (void*)0;
        for (p_16.f2 = 0; (p_16.f2 != (-4)); p_16.f2 = safe_sub_func_int64_t_s_s(p_16.f2, 2))
        { 
            int32_t ***l_80 = &l_43;
            int32_t ** const *l_88 = &l_43;
            int32_t ** const **l_87[1];
            int64_t *l_152 = &g_153;
            int i;
            for (i = 0; i < 1; i++)
                l_87[i] = &l_88;
            l_87[0] = func_46((((&g_26 == (void*)0) >= g_26) , ((func_50(g_39, (l_53[2][0][3] , ((0xF8L || (p_13.f0.f2 <= 0x17B1L)) > 65535UL))) , p_16.f3) , g_62[0])), g_36, l_80);
            if ((&l_87[0] != (void*)0))
            { 
                int64_t l_89 = 6L;
                int32_t l_90 = 0xC35ED1F7L;
                int32_t l_91 = 0xB496B13AL;
                g_26 = p_16.f0;
                if ((*g_25))
                { 
                    uint8_t l_92 = 0x99L;
                    l_92--;
                }
                else
                { 
                    int64_t l_101 = (-7L);
                    uint32_t *l_102 = &g_77.f4;
                    int32_t l_103 = 5L;
                    l_103 ^= (((*l_102) ^= (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((l_90 || 6UL) , l_101), 0)), 5)), l_91))) , (l_34[1] ^= p_16.f1));
                    l_33[3] = &l_34[1];
                    l_103 = 0x87E75986L;
                }
            }
            else
            { 
                int32_t ****l_112 = &l_80;
                int32_t l_132[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_132[i] = 0L;
                for (p_15 = 0; (p_15 >= 41); p_15++)
                { 
                    union U3 **l_108 = &g_106[0];
                    (*l_108) = g_106[0];
                    l_34[1] = g_109;
                    g_77.f2 = ((safe_mul_func_int16_t_s_s(p_13.f0.f0, (l_112 != (void*)0))) < (((&g_63 != &g_63) & 0xBD57L) != (safe_add_func_int64_t_s_s(((l_115 , 0x63C4L) ^ p_13.f0.f0), 18446744073709551613UL))));
                }
                for (l_115.f0.f4 = 0; (l_115.f0.f4 == 28); l_115.f0.f4 = safe_add_func_int16_t_s_s(l_115.f0.f4, 5))
                { 
                    int32_t l_118 = 0L;
                    int32_t l_131 = 2L;
                    const int8_t *l_141 = &l_121[2].f0.f0;
                    const int8_t **l_140 = &l_141;
                    int32_t l_147 = 0x1B346795L;
                    l_118 &= 0xE0544DDAL;
                    l_34[2] = (safe_lshift_func_uint16_t_u_s(((l_131 |= (((p_16.f4 || 4294967295UL) < (((l_121[2] , ((safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(g_77.f0, ((g_77.f0 >= (safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((void*)0 != l_130), (-8L))) | g_107.f0), g_77.f4))) > g_107.f0))) , 1L), l_118)) & 0x7335FF0F84FEBEC8LL)) , g_77.f0) , p_16.f4)) || 1L)) , g_107.f0), p_13.f0.f4));
                    --g_133;
                    l_147 = (l_131 = (((safe_lshift_func_int8_t_s_s(g_77.f3, 6)) , ((((*l_140) = (void*)0) != (void*)0) , (p_13.f0.f0 != g_39))) <= ((((safe_mod_func_int8_t_s_s(((((g_144 , (safe_lshift_func_uint8_t_u_u(p_15, p_13.f0.f0))) && p_15) == 0UL) && 0x5E6FE971D65AF2B1LL), g_77.f0)) <= g_76) != p_16.f4) >= p_15)));
                }
            }
            if (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((&g_64 == (void*)0) != ((*l_152) = g_144.f0.f3)), g_62[0])), (g_154 , ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((0x8C9CL > (safe_div_func_uint8_t_u_u((p_16.f3 && l_161), 5L))), g_144.f0.f0)) | 0x26EDL), g_39)) >= 0xA216F810L)))) <= p_17))
            { 
                int32_t ***l_162 = (void*)0;
                int32_t ***l_163 = &l_130;
                uint16_t *l_164 = &g_107.f0;
                uint16_t *l_165[7][5] = {{&g_109,&l_53[2][0][3].f0,&g_36,&l_53[2][0][3].f0,&g_109},{&g_109,&l_53[2][0][3].f0,&g_36,&l_53[2][0][3].f0,&g_109},{&g_109,&l_53[2][0][3].f0,&g_36,&l_53[2][0][3].f0,&g_109},{&g_109,&l_53[2][0][3].f0,&g_36,&l_53[2][0][3].f0,&g_109},{&g_109,&l_53[2][0][3].f0,&g_36,&l_53[2][0][3].f0,&g_109},{&g_109,&l_53[2][0][3].f0,&g_36,&l_53[2][0][3].f0,&g_109},{&g_109,&l_53[2][0][3].f0,&g_36,&l_53[2][0][3].f0,&g_109}};
                int i, j;
                g_167 = (1L | (p_17 || (p_15 ^= (((g_109 ^= ((*l_164) = ((*l_42) == ((*l_163) = (void*)0)))) && (0xEC52BA2822E894D0LL == (((p_13.f0.f0 , ((~3UL) , p_13.f0)) , p_13.f0.f1) & p_14))) < p_16.f3))));
                if ((*g_25))
                    break;
                for (l_115.f0.f2 = 5; (l_115.f0.f2 == 18); l_115.f0.f2 = safe_add_func_int8_t_s_s(l_115.f0.f2, 8))
                { 
                    int32_t l_172[7][2] = {{0L,0L},{0x7FFB0671L,0L},{0L,0x7FFB0671L},{0L,0L},{0x7FFB0671L,0L},{0L,0x7FFB0671L},{0L,0L}};
                    int32_t l_176[5];
                    struct S0 *l_177[1][7][5] = {{{&g_144.f0,&g_144.f0,(void*)0,&l_115.f0,&l_115.f0},{(void*)0,(void*)0,(void*)0,&l_115.f0,&g_144.f1},{&l_115.f0,(void*)0,&g_77,(void*)0,&l_115.f0},{&l_115.f0,(void*)0,&l_115.f0,&l_115.f0,&g_144.f0},{&l_115.f0,&g_144.f0,&g_144.f1,&l_115.f0,&l_115.f0},{&l_115.f0,&g_77,&l_115.f0,(void*)0,&g_144.f0},{(void*)0,&l_115.f0,&g_144.f0,(void*)0,&l_115.f0}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_176[i] = 0x84DE00D5L;
                    g_167 |= (g_26 = (safe_add_func_int16_t_s_s((func_18(l_172[0][1], (*g_63), p_13.f0.f1, (*g_69), (*g_63)) , (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s(0x569C0FF02EEB5263LL)), p_13.f0.f0))), 0x9A69L)));
                    l_176[0] |= p_13.f0.f4;
                    l_178 = p_13.f0;
                }
            }
            else
            { 
                g_179 &= 0L;
            }
            (*g_63) = (*g_63);
            for (g_144.f1.f2 = 0; (g_144.f1.f2 >= (-22)); g_144.f1.f2--)
            { 
                int32_t *l_182 = &l_35;
                (*g_69) = l_182;
                g_167 &= (**g_69);
                return g_144;
            }
        }
    }
    (*l_183) = l_178;
    (*l_184) ^= p_13.f0.f4;
    return l_115;
}



static union U1  func_18(uint32_t  p_19, const int32_t * p_20, const int8_t  p_21, int32_t * p_22, int32_t * p_23)
{ 
    union U1 l_28 = {{0x81L,18446744073709551607UL,1L,1L,0xF9481F34L}};
    return l_28;
}



static int32_t ** const ** func_46(uint16_t  p_47, uint32_t  p_48, int32_t *** p_49)
{ 
    struct S0 l_81 = {0xFEL,1UL,0x2DA2EA94L,0L,0x395B56AFL};
    struct S0 *l_82 = &g_77;
    int32_t ***l_85[1][5][6] = {{{&g_69,&g_69,&g_63,(void*)0,&g_63,&g_69},{&g_69,&g_69,&g_63,(void*)0,&g_63,&g_69},{&g_69,&g_69,&g_63,(void*)0,&g_63,&g_69},{&g_69,&g_69,&g_63,(void*)0,&g_63,&g_69},{&g_69,&g_69,&g_63,(void*)0,&g_63,&g_69}}};
    int32_t ****l_84 = &l_85[0][0][1];
    int32_t *****l_83 = &l_84;
    int32_t ** const **l_86 = (void*)0;
    int i, j, k;
    (*l_82) = l_81;
    l_83 = l_83;
    return l_86;
}



static union U3  func_50(uint16_t  p_51, int16_t  p_52)
{ 
    int64_t l_58 = 0x206571F67B260EC6LL;
    int8_t *l_61 = &g_62[0];
    int32_t ***l_65 = &g_63;
    int32_t ***l_66 = (void*)0;
    int32_t **l_68 = &g_64;
    int32_t ***l_67[5][6][1] = {{{&l_68},{&l_68},{&l_68},{&l_68},{&l_68},{&l_68}},{{&l_68},{&l_68},{&l_68},{&l_68},{&l_68},{&l_68}},{{&l_68},{&l_68},{&l_68},{&l_68},{&l_68},{&l_68}},{{&l_68},{&l_68},{&l_68},{&l_68},{&l_68},{&l_68}},{{&l_68},{&l_68},{&l_68},{&l_68},{&l_68},{&l_68}}};
    struct S0 *l_78 = &g_77;
    union U3 l_79 = {0x2125L};
    int i, j, k;
    g_76 ^= (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((l_58 <= (safe_div_func_uint64_t_u_u(((((*l_61) = g_26) < (((g_69 = ((*l_65) = g_63)) != (void*)0) & ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_39, (255UL || ((safe_mul_func_uint16_t_u_u(p_51, p_52)) , g_39)))), g_39)) > (*g_25)))) | p_51), 1L))) ^ (-1L)) == 0x7033L), p_51)), g_39));
    (*l_78) = g_77;
    return l_79;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
    transparent_crc(g_77.f4, "g_77.f4", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_144.f0.f0, "g_144.f0.f0", print_hash_value);
    transparent_crc(g_144.f0.f1, "g_144.f0.f1", print_hash_value);
    transparent_crc(g_144.f0.f2, "g_144.f0.f2", print_hash_value);
    transparent_crc(g_144.f0.f3, "g_144.f0.f3", print_hash_value);
    transparent_crc(g_144.f0.f4, "g_144.f0.f4", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_154.f0.f0, "g_154.f0.f0", print_hash_value);
    transparent_crc(g_154.f0.f1, "g_154.f0.f1", print_hash_value);
    transparent_crc(g_154.f0.f2, "g_154.f0.f2", print_hash_value);
    transparent_crc(g_154.f0.f3, "g_154.f0.f3", print_hash_value);
    transparent_crc(g_154.f0.f4, "g_154.f0.f4", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_210[i], "g_210[i]", print_hash_value);

    }
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_228.f2, "g_228.f2", print_hash_value);
    transparent_crc(g_228.f3, "g_228.f3", print_hash_value);
    transparent_crc(g_228.f4, "g_228.f4", print_hash_value);
    transparent_crc(g_232.f0.f0, "g_232.f0.f0", print_hash_value);
    transparent_crc(g_232.f0.f1, "g_232.f0.f1", print_hash_value);
    transparent_crc(g_232.f0.f2, "g_232.f0.f2", print_hash_value);
    transparent_crc(g_232.f0.f3, "g_232.f0.f3", print_hash_value);
    transparent_crc(g_232.f0.f4, "g_232.f0.f4", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_457[i][j][k].f0.f0, "g_457[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_457[i][j][k].f0.f1, "g_457[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_457[i][j][k].f0.f2, "g_457[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_457[i][j][k].f0.f3, "g_457[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_457[i][j][k].f0.f4, "g_457[i][j][k].f0.f4", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_556[i][j], "g_556[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_972.f0.f0, "g_972.f0.f0", print_hash_value);
    transparent_crc(g_972.f0.f1, "g_972.f0.f1", print_hash_value);
    transparent_crc(g_972.f0.f2, "g_972.f0.f2", print_hash_value);
    transparent_crc(g_972.f0.f3, "g_972.f0.f3", print_hash_value);
    transparent_crc(g_972.f0.f4, "g_972.f0.f4", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1027.f0.f0, "g_1027.f0.f0", print_hash_value);
    transparent_crc(g_1027.f0.f1, "g_1027.f0.f1", print_hash_value);
    transparent_crc(g_1027.f0.f2, "g_1027.f0.f2", print_hash_value);
    transparent_crc(g_1027.f0.f3, "g_1027.f0.f3", print_hash_value);
    transparent_crc(g_1027.f0.f4, "g_1027.f0.f4", print_hash_value);
    transparent_crc(g_1028.f0.f0, "g_1028.f0.f0", print_hash_value);
    transparent_crc(g_1028.f0.f1, "g_1028.f0.f1", print_hash_value);
    transparent_crc(g_1028.f0.f2, "g_1028.f0.f2", print_hash_value);
    transparent_crc(g_1028.f0.f3, "g_1028.f0.f3", print_hash_value);
    transparent_crc(g_1028.f0.f4, "g_1028.f0.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1148[i], "g_1148[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1302[i].f0.f0, "g_1302[i].f0.f0", print_hash_value);
        transparent_crc(g_1302[i].f0.f1, "g_1302[i].f0.f1", print_hash_value);
        transparent_crc(g_1302[i].f0.f2, "g_1302[i].f0.f2", print_hash_value);
        transparent_crc(g_1302[i].f0.f3, "g_1302[i].f0.f3", print_hash_value);
        transparent_crc(g_1302[i].f0.f4, "g_1302[i].f0.f4", print_hash_value);

    }
    transparent_crc(g_1391, "g_1391", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
