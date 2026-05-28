// SPDX-License-Identifier: MIT
// cctest_csmith_3d1170e3.c --- cctest case csmith_3d1170e3 (csmith seed 1024553187)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x17d350fb */
/* @exp_ticks 0x418b */

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

// Options:   -s 1024553187 -o /tmp/csmith_gen_5ikc44uo/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   int32_t  f1;
   int64_t  f2;
};

union U1 {
   uint64_t  f0;
   int32_t  f1;
};

union U2 {
   int32_t  f0;
   const uint8_t  f1;
   int32_t  f2;
};


static int32_t g_2[4][3] = {{6L,6L,6L},{6L,6L,6L},{6L,6L,6L},{6L,6L,6L}};
static int8_t g_6 = 0x92L;
static uint8_t g_19[2][5] = {{0xEBL,6UL,6UL,0xEBL,0x50L},{0xEBL,6UL,6UL,0xEBL,0x50L}};
static int32_t g_54 = 0L;
static struct S0 g_66 = {18446744073709551607UL,0xBBC9109BL,1L};
static int8_t g_69 = (-1L);
static union U1 g_70 = {7UL};
static struct S0 g_107 = {18446744073709551613UL,0xDB0F7197L,-1L};
static int8_t g_214 = 0xC1L;
static int32_t g_247[2][1] = {{0xE6FDF356L},{0xE6FDF356L}};
static uint32_t g_253[4] = {0x0897D55FL,0x0897D55FL,0x0897D55FL,0x0897D55FL};
static uint64_t g_290 = 0xEF0A5C0DE6CBD431LL;
static int8_t g_299[1][5][3] = {{{(-1L),0xB6L,(-1L)},{0x68L,0x64L,1L},{0x68L,0x68L,0x64L},{(-1L),0x64L,0x64L},{0x64L,0xB6L,1L}}};
static const union U2 g_324 = {0L};
static uint16_t g_346[4][1] = {{1UL},{1UL},{1UL},{1UL}};
static uint8_t g_366 = 0xBEL;
static uint16_t g_372[4] = {65535UL,65535UL,65535UL,65535UL};



static union U1  func_1(void);
static int32_t  func_10(int32_t  p_11, int64_t  p_12, uint8_t  p_13, int32_t  p_14, const uint16_t  p_15);
static uint8_t  func_29(union U1  p_30);
static union U1  func_31(int8_t  p_32, const uint16_t  p_33, int64_t  p_34, uint64_t  p_35, uint8_t  p_36);




static union U1  func_1(void)
{ 
    const int32_t l_7 = 0L;
    int32_t l_8 = 0x694A61BFL;
    struct S0 l_301 = {0x1DF32BE280712D52LL,0x00F530CFL,0xDC49502B8A2F4035LL};
    struct S0 l_302 = {0x4F9C5EA17FF4D61BLL,0xA2292E40L,0xD6EA40EAC941AE33LL};
    union U1 l_303 = {18446744073709551615UL};
    int16_t l_365 = 0L;
    int32_t l_368 = (-1L);
    int32_t l_369[1];
    int i;
    for (i = 0; i < 1; i++)
        l_369[i] = (-1L);
lbl_375:
    for (g_2[0][0] = 0; (g_2[0][0] <= 1); g_2[0][0] = safe_add_func_uint8_t_u_u(g_2[0][0], 9))
    { 
        int32_t l_5 = 0L;
        uint16_t l_9[1][4][1] = {{{0x3F9BL},{0x231FL},{0x3F9BL},{0x231FL}}};
        int i, j, k;
        g_6 = l_5;
        l_8 = (l_5 >= (1L == ((((l_7 == 0xB2C57E71L) == 6UL) || 0x2A96L) < 65531UL)));
        if (l_7)
        { 
            uint8_t l_20 = 0x5CL;
            struct S0 l_300 = {0xABAA0D8A4525A2D4LL,1L,-1L};
            for (l_5 = 0; (l_5 >= 0); l_5 -= 1)
            { 
                int64_t l_18 = 0x0635300547507AF9LL;
            }
            l_302 = (l_301 = l_300);
        }
        else
        { 
            uint8_t l_318 = 0x65L;
            g_247[1][0] = ((l_303 , (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x5C82L, l_318)), (l_303.f1 = (!0xDF61B3953D0D8F89LL)))), g_107.f0)), 10)), 8)) , 0xEFD7L), l_301.f2)), l_318))) & l_318);
        }
    }
lbl_377:
    for (g_69 = (-25); (g_69 > 15); ++g_69)
    { 
        int16_t l_333 = (-1L);
        int64_t l_334 = 0x62613ABF3A2D1CABLL;
        int32_t l_335 = 0L;
        int32_t l_336[5];
        union U1 l_367 = {0x013895B77DECB9D6LL};
        int i;
        for (i = 0; i < 5; i++)
            l_336[i] = 0xECCEF58CL;
        if ((safe_sub_func_uint8_t_u_u(g_290, (g_324 , (((safe_div_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(l_302.f0, g_324.f1)), l_333)) != 0L) | 2UL) != l_334), g_2[2][0])) == 0xDEL) == 0L), l_301.f0)) >= l_7) | l_301.f2)))))
        { 
            return g_70;
        }
        else
        { 
            uint16_t l_337[2][2][3] = {{{65533UL,0UL,0x56C6L},{0x1167L,0UL,0x1167L}},{{0x32E3L,65533UL,0x56C6L},{0x32E3L,0x32E3L,65533UL}}};
            int i, j, k;
            --l_337[1][1][2];
            g_346[3][0] = (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_334, ((g_299[0][1][1] <= (l_301.f2 ^ ((safe_lshift_func_int8_t_s_s((g_19[1][2] , g_66.f0), l_334)) == g_253[1]))) ^ g_253[0]))), 1L));
        }
        for (l_301.f0 = 0; (l_301.f0 == 42); l_301.f0 = safe_add_func_uint32_t_u_u(l_301.f0, 5))
        { 
            int64_t l_355 = 1L;
            int32_t l_370 = 5L;
            int32_t l_371 = 0xA923BFBBL;
            struct S0 l_376 = {0x8CC824D222F857C4LL,0xB1799F5AL,1L};
            if (((l_335 = (safe_div_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_355 ^ (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((++g_70.f0))), 1L))), ((safe_sub_func_uint64_t_u_u(l_7, (safe_add_func_int64_t_s_s(((g_366 |= l_365) ^ g_69), g_19[1][1])))) == 0x502CA6F6L))), g_107.f0)), g_324.f2))) <= l_302.f0))
            { 
                return l_367;
            }
            else
            { 
                ++g_372[2];
                if (l_7)
                    goto lbl_375;
            }
            l_370 = (g_247[1][0] = l_370);
            if (g_324.f1)
                goto lbl_377;
            l_376 = (g_66 = l_376);
        }
    }
    l_301 = g_107;
    return l_303;
}



static int32_t  func_10(int32_t  p_11, int64_t  p_12, uint8_t  p_13, int32_t  p_14, const uint16_t  p_15)
{ 
    int32_t l_21 = (-4L);
    int32_t l_22 = 0x3205E60DL;
    int32_t l_41 = 0x9FFFBC9EL;
    uint8_t l_161 = 0xE3L;
    union U1 l_168[5][4] = {{{1UL},{0x96564E103B0344C0LL},{5UL},{0UL}},{{0x96564E103B0344C0LL},{0x2F2774A6D0D7E747LL},{0x2F2774A6D0D7E747LL},{0x96564E103B0344C0LL}},{{0xB69ECCD4FD1129C7LL},{0UL},{0x2F2774A6D0D7E747LL},{0UL}},{{0x96564E103B0344C0LL},{1UL},{5UL},{1UL}},{{1UL},{0x2F2774A6D0D7E747LL},{0xB69ECCD4FD1129C7LL},{1UL}}};
    int64_t l_220[5][5] = {{(-1L),6L,0x46CD2D6C20E68A72LL,(-1L),(-1L)},{6L,(-1L),6L,0x46CD2D6C20E68A72LL,(-1L)},{(-1L),0L,(-1L),0L,(-1L)},{6L,0L,(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),7L}};
    uint8_t l_225 = 1UL;
    struct S0 l_227 = {1UL,-9L,0x635642BD7763B51ELL};
    uint16_t l_237 = 0x8380L;
    int8_t l_249 = 0xD1L;
    int32_t l_252[1];
    int8_t l_268 = 1L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_252[i] = 0x9F9731A4L;
    l_22 |= l_21;
lbl_228:
    for (p_14 = 0; (p_14 != 0); p_14 = safe_add_func_int16_t_s_s(p_14, 3))
    { 
        int16_t l_42 = 0x203DL;
        uint64_t l_213 = 0x8DBEBFAB12DF4544LL;
        struct S0 l_226[5][3] = {{{0x7AC5B85297743FDFLL,2L,1L},{0x7AC5B85297743FDFLL,2L,1L},{0UL,0xAB6B2F1FL,-1L}},{{0x7AC5B85297743FDFLL,2L,1L},{0x7AC5B85297743FDFLL,2L,1L},{0UL,0xAB6B2F1FL,-1L}},{{0x7AC5B85297743FDFLL,2L,1L},{0x7AC5B85297743FDFLL,2L,1L},{0UL,0xAB6B2F1FL,-1L}},{{0x7AC5B85297743FDFLL,2L,1L},{0x7AC5B85297743FDFLL,2L,1L},{0UL,0xAB6B2F1FL,-1L}},{{0x7AC5B85297743FDFLL,2L,1L},{0x7AC5B85297743FDFLL,2L,1L},{0UL,0xAB6B2F1FL,-1L}}};
        int i, j;
        for (l_22 = 19; (l_22 != 23); l_22 = safe_add_func_uint8_t_u_u(l_22, 2))
        { 
            uint32_t l_162[2][5] = {{0UL,1UL,1UL,0UL,0x95D4EB7AL},{0UL,1UL,1UL,0UL,0x95D4EB7AL}};
            int i, j;
        }
        if (((((((safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((g_69 = (((safe_mul_func_uint8_t_u_u((((0x83L < ((!(g_214 ^= (safe_div_func_uint8_t_u_u(l_42, (safe_div_func_int64_t_s_s(g_70.f1, ((g_19[1][1]++) && l_213))))))) < 18446744073709551606UL)) <= p_12) > p_12), g_107.f1)) == p_12) , l_213)), g_2[0][0])) >= l_41) || p_11) > p_13), 4)), g_6)), g_70.f0)) | 0L) | p_14) != g_66.f1) | l_42) != g_70.f0))
        { 
            uint8_t l_215[5] = {254UL,254UL,254UL,254UL,254UL};
            int i;
            l_168[0][1].f1 = l_215[4];
            if (g_66.f1)
                goto lbl_228;
            p_11 = (p_13 , (safe_rshift_func_uint16_t_u_s((((((g_214 = (g_66 , (safe_div_func_uint16_t_u_u(((g_66.f0 , 1L) && g_6), 0x76E1L)))) ^ g_19[1][1]) , l_220[1][3]) < (-1L)) >= g_66.f0), g_70.f0)));
            p_11 ^= (safe_mod_func_int64_t_s_s((l_215[4] && (safe_rshift_func_uint16_t_u_u(p_14, 8))), (l_225 ^= (p_12 = 1L))));
        }
        else
        { 
            l_227 = (g_70 , l_226[4][1]);
            if (p_11)
                break;
            return p_15;
        }
    }
    if ((safe_sub_func_uint64_t_u_u(((g_6 < (p_14 , ((l_168[0][1] = g_70) , (safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((safe_add_func_int32_t_s_s(0x9C56D798L, l_237)) || 0x0F0D37C6B6CE796FLL) & 0x4E9BBA045BBC914BLL), g_70.f0)), 4294967294UL))))) & g_66.f2), p_15)))
    { 
        union U2 l_238 = {1L};
        int32_t l_250 = 0L;
        int32_t l_251[4] = {0x570C3BFCL,0x570C3BFCL,0x570C3BFCL,0x570C3BFCL};
        int i;
        if ((l_238 , (safe_lshift_func_int16_t_s_s(p_12, (safe_add_func_int32_t_s_s(0xFBAB55B0L, ((safe_mul_func_uint8_t_u_u((((g_19[0][4] |= (l_22 |= 0x8DL)) ^ 0x27L) == 8UL), 0UL)) < l_227.f2)))))))
        { 
            if (l_220[1][3])
            { 
                return l_238.f2;
            }
            else
            { 
                g_70.f1 = l_227.f1;
                return g_54;
            }
        }
        else
        { 
            int16_t l_245 = 0xC1EEL;
            int32_t l_246 = 0x3AD1BBFEL;
            int32_t l_248[4][2];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_248[i][j] = (-7L);
            }
            g_253[0]--;
        }
    }
    else
    { 
        const int32_t l_273 = 0x7FF88ED9L;
        int32_t l_289 = 0x8FB4CFB2L;
        for (p_12 = 0; (p_12 != 18); p_12 = safe_add_func_uint32_t_u_u(p_12, 9))
        { 
            union U2 l_262[1] = {{0xA31730F2L}};
            int32_t l_288 = 0L;
            struct S0 l_298 = {0xBC53BA5E16FDFC68LL,0L,-4L};
            int i;
            g_247[0][0] = (g_70 , (((safe_mul_func_uint16_t_u_u(((((((g_253[0] != (g_107.f2 && 65526UL)) | l_225) < g_253[2]) | 0x79L) , 0L) , p_12), p_12)) && g_247[0][0]) == 0x9FL));
            g_247[0][0] |= ((safe_mul_func_int16_t_s_s((g_2[1][0] ^ (l_262[0] , (safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((!l_268), (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(0x23L, l_273)), l_273)))) ^ 0UL), 2)))), g_107.f1)) , g_107.f1);
        }
    }
    return g_66.f1;
}



static uint8_t  func_29(union U1  p_30)
{ 
    uint64_t l_113 = 2UL;
    uint32_t l_114 = 1UL;
    union U2 l_126 = {0xFB04DD1BL};
    for (g_66.f0 = (-27); (g_66.f0 >= 52); g_66.f0 = safe_add_func_int16_t_s_s(g_66.f0, 5))
    { 
        struct S0 l_106[3] = {{0x7E68FBA5D09CABD9LL,0x907AF384L,0x84E5F115DA449007LL},{0x7E68FBA5D09CABD9LL,0x907AF384L,0x84E5F115DA449007LL},{0x7E68FBA5D09CABD9LL,0x907AF384L,0x84E5F115DA449007LL}};
        int i;
        for (g_6 = 0; (g_6 <= 1); g_6 += 1)
        { 
            int i, j;
            l_106[1] = g_66;
            g_70.f1 = g_19[g_6][(g_6 + 1)];
        }
        g_107 = g_66;
    }
    p_30.f1 = (safe_unary_minus_func_uint16_t_u(((0x2CL != (safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((l_114 = l_113), (~(safe_div_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(0xC333L, (((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s((l_126 , p_30.f1), 0)) <= p_30.f0) | g_6), 14)), (-1L))) & 0x2EA8L) , g_107.f0))) ^ g_19[1][0]), l_126.f1))))), g_107.f1))) <= l_126.f2)));
    return l_114;
}



static union U1  func_31(int8_t  p_32, const uint16_t  p_33, int64_t  p_34, uint64_t  p_35, uint8_t  p_36)
{ 
    const uint16_t l_51[2] = {1UL,1UL};
    int32_t l_52 = 1L;
    int32_t l_61 = (-5L);
    union U2 l_67 = {-1L};
    int32_t l_99 = (-1L);
    union U1 l_103 = {18446744073709551615UL};
    int i;
    for (p_34 = 0; (p_34 <= 1); p_34 += 1)
    { 
        int64_t l_48 = 0xEC61C9C8A038AA13LL;
        int32_t l_53 = 0x3848A66BL;
        union U1 l_68 = {18446744073709551612UL};
        if (g_19[0][3])
            break;
        g_54 = ((safe_add_func_uint16_t_u_u((~(safe_sub_func_uint32_t_u_u((l_52 = ((l_48 = g_19[1][0]) & (((safe_lshift_func_int8_t_s_u((0x4AL || g_19[1][1]), 1)) == 250UL) != l_51[1]))), p_36))), 0xD128L)) > l_53);
        if (((((safe_mod_func_uint32_t_u_u((l_52 &= l_51[0]), l_48)) != (l_61 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_35, 0x5383EB3DL)), l_51[0])))) < g_2[0][0]) || 0xFBC0L))
        { 
            for (g_6 = 1; (g_6 >= 0); g_6 -= 1)
            { 
                int i, j;
                g_69 = ((safe_sub_func_uint32_t_u_u(g_19[g_6][(g_6 + 1)], (safe_mul_func_int16_t_s_s((g_66 , (l_67 , ((g_66.f2 , l_68) , g_19[g_6][(g_6 + 1)]))), g_6)))) <= p_36);
                return g_70;
            }
            l_53 = l_51[1];
        }
        else
        { 
            struct S0 l_71[1] = {{0UL,0xE1E514D8L,0x1344E0D2C3DA88E9LL}};
            struct S0 l_72[4] = {{0x8BB409C3C7D9ACC9LL,0xCB2CAB94L,0x7F8FE0BD880D9182LL},{0x8BB409C3C7D9ACC9LL,0xCB2CAB94L,0x7F8FE0BD880D9182LL},{0x8BB409C3C7D9ACC9LL,0xCB2CAB94L,0x7F8FE0BD880D9182LL},{0x8BB409C3C7D9ACC9LL,0xCB2CAB94L,0x7F8FE0BD880D9182LL}};
            int i;
            l_72[0] = l_71[0];
        }
        for (g_6 = 0; (g_6 <= 1); g_6 += 1)
        { 
            uint32_t l_100 = 18446744073709551615UL;
            int32_t l_101 = 0x034A1017L;
            union U1 l_102 = {0xD65E783BFB6AB9C1LL};
            for (l_53 = 0; (l_53 <= 1); l_53 += 1)
            { 
                int i, j;
                g_70.f1 = (l_101 = ((safe_rshift_func_int8_t_s_u(g_19[l_53][l_53], 0)) , (p_35 == ((safe_mod_func_int64_t_s_s((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((g_54 , ((((((!(((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((((safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((+((safe_sub_func_uint32_t_u_u(((l_68.f1 >= p_34) , 1UL), p_36)) >= g_6)) , l_99), g_19[l_53][l_53])), 0x1A1BBCF5L)) == 1L), p_32)) <= l_100) > l_68.f1), 8)) || 0xFCL) || p_36), p_34)) != l_67.f1) > 0x02ECD410L)) | p_34) | 0x9CL) || 0UL) ^ 0L) & 4L)) && 0x0E59L) , p_32), 0x7AL)), l_67.f1)), l_100)), 0xCAL)) < 0x5910L) ^ l_53), 2UL)) ^ g_70.f0))));
                return l_102;
            }
        }
    }
    return l_103;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_247[i][j], "g_247[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_253[i], "g_253[i]", print_hash_value);

    }
    transparent_crc(g_290, "g_290", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_299[i][j][k], "g_299[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_324.f0, "g_324.f0", print_hash_value);
    transparent_crc(g_324.f1, "g_324.f1", print_hash_value);
    transparent_crc(g_324.f2, "g_324.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_346[i][j], "g_346[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_372[i], "g_372[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
