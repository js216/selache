// SPDX-License-Identifier: MIT
// cctest_csmith_5bab1e4f.c --- cctest case csmith_5bab1e4f (csmith seed 1537941071)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5f3e825e */

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

// Options:   -s 1537941071 -o /tmp/csmith_gen_bjbd3d1d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint64_t  f0;
};

union U1 {
   int64_t  f0;
};


static int32_t g_2[3] = {(-3L),(-3L),(-3L)};
static uint32_t g_18 = 0xA74ADF29L;
static int32_t g_21[5] = {3L,3L,3L,3L,3L};
static uint64_t g_22[4] = {7UL,7UL,7UL,7UL};
static int16_t g_27 = 0L;
static uint8_t g_30[1][3] = {{0x31L,0x31L,0x31L}};
static uint8_t g_53[5] = {0UL,0UL,0UL,0UL,0UL};
static uint32_t g_58 = 0x2380CEB7L;
static uint16_t g_60 = 0x7033L;
static uint8_t g_67 = 255UL;
static uint8_t g_84 = 0UL;
static int64_t g_100[4][4][5] = {{{0x2CFE5A8EECE75099LL,1L,5L,5L,1L},{0x2CFE5A8EECE75099LL,1L,5L,5L,1L},{0x2CFE5A8EECE75099LL,1L,5L,5L,1L},{0x2CFE5A8EECE75099LL,1L,5L,5L,1L}},{{0x2CFE5A8EECE75099LL,1L,5L,5L,1L},{0x2CFE5A8EECE75099LL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL}},{{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL}},{{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL},{0x64B9282FEEDE604ALL,0x595DB7A7163A7FA8LL,1L,1L,0x595DB7A7163A7FA8LL}}};
static int32_t g_105[1] = {0xFF9132EEL};
static int8_t g_108 = (-9L);
static const union U1 g_116[5][2][3] = {{{{-1L},{0x24F76BCC78BB94ACLL},{0xC15363C4F9E1A8ADLL}},{{-1L},{0x24F76BCC78BB94ACLL},{6L}}},{{{-5L},{0x24F76BCC78BB94ACLL},{0x24F76BCC78BB94ACLL}},{{-1L},{0x24F76BCC78BB94ACLL},{0xC15363C4F9E1A8ADLL}}},{{{-1L},{0x24F76BCC78BB94ACLL},{6L}},{{-5L},{0x24F76BCC78BB94ACLL},{0x24F76BCC78BB94ACLL}}},{{{-1L},{0x24F76BCC78BB94ACLL},{0xC15363C4F9E1A8ADLL}},{{-1L},{0x24F76BCC78BB94ACLL},{6L}}},{{{-5L},{0x24F76BCC78BB94ACLL},{0x24F76BCC78BB94ACLL}},{{-1L},{0x24F76BCC78BB94ACLL},{0xC15363C4F9E1A8ADLL}}}};
static struct S0 g_147 = {0xA439A01C8D9E6B8CLL};



static struct S0  func_1(void);
static int16_t  func_4(int64_t  p_5, const uint64_t  p_6);
static const int32_t  func_9(int32_t  p_10, int16_t  p_11, uint32_t  p_12, uint32_t  p_13, int32_t  p_14);
static int16_t  func_34(const int64_t  p_35, int32_t  p_36, uint32_t  p_37);




static struct S0  func_1(void)
{ 
    uint32_t l_17 = 18446744073709551614UL;
    int32_t l_28[4][5][3] = {{{0xE5769E8AL,0x2D14B432L,1L},{0xD2214C25L,0xD2214C25L,0x947E29ACL},{0x30906344L,0x19F8C517L,0x30906344L},{0xD2214C25L,0x74FD5744L,0x74FD5744L},{0xE5769E8AL,0x19F8C517L,1L}},{{0xB7D869E7L,0xD2214C25L,0x74FD5744L},{0x30906344L,0x2D14B432L,0x30906344L},{0xB7D869E7L,0x74FD5744L,0x947E29ACL},{0xE5769E8AL,0x2D14B432L,1L},{0xD2214C25L,0xD2214C25L,0x947E29ACL}},{{0x30906344L,0x19F8C517L,0x30906344L},{0xD2214C25L,0x74FD5744L,0x74FD5744L},{0xE5769E8AL,0x19F8C517L,1L},{0xB7D869E7L,0xD2214C25L,0x74FD5744L},{0x30906344L,0x2D14B432L,0x30906344L}},{{0xB7D869E7L,0x74FD5744L,0x947E29ACL},{0xE5769E8AL,0x2D14B432L,1L},{0xD2214C25L,0xD2214C25L,0x947E29ACL},{0x30906344L,0x19F8C517L,0x30906344L},{0xD2214C25L,0x74FD5744L,0x74FD5744L}}};
    const uint64_t l_29 = 0x2FE868E0133D4965LL;
    int8_t l_54 = 0x01L;
    int32_t l_55 = 0x084C010BL;
    uint64_t l_87[1];
    int16_t l_120 = 1L;
    int64_t l_127[1][2][4];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_87[i] = 0xF1F7F3414C507BD8LL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
                l_127[i][j][k] = 0xE00C6155EFB0F277LL;
        }
    }
    g_2[2] = 0L;
    l_28[2][3][2] = (0xBA1BL < (!func_4(((((l_28[2][3][2] ^= ((safe_add_func_int32_t_s_s(func_9((safe_add_func_uint32_t_u_u(((1L ^ g_2[2]) || ((l_17 || 0x5EL) >= 0UL)), g_18)), l_17, g_18, g_2[2], l_17), g_21[3])) | g_21[2])) == g_2[2]) , g_22[3]) | l_17), l_29)));
    for (l_17 = 0; (l_17 <= 0); l_17 += 1)
    { 
        const uint32_t l_57 = 0x8B20CE92L;
        int32_t l_61 = 0xA56D104AL;
        int64_t l_66[3];
        int64_t l_142 = (-8L);
        int16_t l_143 = 0L;
        int i;
        for (i = 0; i < 3; i++)
            l_66[i] = 9L;
        g_58 = ((safe_rshift_func_int16_t_s_s(func_34(g_22[(l_17 + 1)], g_22[(l_17 + 1)], ((((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_55 ^= (+(safe_rshift_func_uint8_t_u_u((l_28[2][2][2] = ((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s((((g_53[2] &= ((safe_sub_func_uint32_t_u_u(((((((l_17 == g_22[1]) >= 0x72C247AFL) && g_22[(l_17 + 1)]) , l_28[2][3][2]) ^ 0xD5D2L) < g_22[(l_17 + 1)]), 4294967295UL)) != g_30[0][2])) != g_2[2]) != 0xFF9B11162BCA918CLL), 0x2730L)), l_54)), l_17)) , g_30[0][2])), 5)))), 8L)), (-1L))) | l_54) == g_22[(l_17 + 1)]) > 0L)), l_57)) > g_2[2]);
        l_28[1][4][1] = 0x50395763L;
        if ((g_67 &= ((safe_unary_minus_func_uint16_t_u(g_18)) && ((g_60 = l_29) , (((l_61 = g_18) || ((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_54, g_30[0][2])), l_28[2][3][2])) , g_2[2])) || l_66[0])))))
        { 
            int16_t l_81 = 0L;
            int32_t l_82 = 8L;
            uint16_t l_83[4];
            uint64_t l_119 = 0x159D6D56307DCF4CLL;
            int i;
            for (i = 0; i < 4; i++)
                l_83[i] = 0x8701L;
            for (l_54 = 0; (l_54 >= 0); l_54 -= 1)
            { 
                int i, j;
                g_84 &= (safe_mul_func_int16_t_s_s(g_30[l_54][(l_54 + 2)], ((((((safe_lshift_func_int8_t_s_s((5UL <= (g_67 ^= (l_55 &= (safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((!(l_82 = ((g_22[(l_17 + 3)]++) == (l_81 == (g_53[3] != 0xDF30550DL))))) == g_53[2]) , l_83[2]), 4)), g_21[3])), g_30[0][2]))))), 6)) < 0L) ^ g_30[0][0]) , l_81) , g_53[2]) != 65535UL)));
                l_82 = (((safe_add_func_uint64_t_u_u((g_100[1][0][1] &= ((l_87[0] < (safe_rshift_func_int8_t_s_s(((((((safe_div_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(18446744073709551608UL, (safe_mul_func_int16_t_s_s((g_27 ^= (((-3L) == (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(0x9BL, g_30[0][2])), g_30[l_54][(l_54 + 1)]))) > g_30[l_54][(l_54 + 1)])), 0xC980L)))), g_30[l_54][(l_54 + 1)])) & g_2[2]) , g_22[3]) > g_2[2]) < g_22[(l_17 + 3)]) > l_82), 2))) , 0UL)), g_30[0][1])) < 1UL) && g_30[l_54][(l_54 + 2)]);
                g_108 = (g_21[3] > (l_82 != (safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_105[0] ^= g_22[(l_17 + 3)]), (safe_mul_func_uint8_t_u_u(g_22[3], g_22[(l_17 + 1)])))), g_22[3]))));
            }
            for (g_18 = (-5); (g_18 < 4); g_18 = safe_add_func_uint16_t_u_u(g_18, 2))
            { 
                g_105[0] = (l_28[2][3][2] = (g_60 || (((safe_lshift_func_int8_t_s_u((g_108 = (l_66[0] && 18446744073709551606UL)), 2)) , (l_66[0] >= 0x5F7338A2L)) , g_2[2])));
                g_105[0] = (((g_108 = g_2[2]) ^ (((safe_lshift_func_uint8_t_u_u(0x99L, 4)) != (!((((((g_116[4][1][1] , (safe_lshift_func_uint16_t_u_s(((g_21[3] != g_116[4][1][1].f0) == l_57), g_100[0][1][2]))) ^ g_22[3]) == g_60) ^ l_119) ^ 0xF8C06C6856C27949LL) , g_27))) != l_120)) && 7UL);
                g_105[0] = (l_83[1] <= ((safe_sub_func_int8_t_s_s(l_83[0], (l_83[2] ^ (l_82 = g_58)))) < 0x858FB2D7326E4838LL));
            }
        }
        else
        { 
            int32_t l_128 = (-5L);
            int32_t l_141 = 8L;
            uint16_t l_144 = 0x9DF7L;
            l_128 = (g_105[0] = (safe_mul_func_uint8_t_u_u(((((g_108 ^= (l_61 = ((253UL <= (g_2[2] == (0x4FL == g_21[3]))) != g_105[0]))) < l_127[0][0][1]) != g_2[2]) > l_127[0][0][1]), g_2[1])));
            g_105[0] = (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_22[1] = g_100[1][0][1]) | (((g_60 && (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(l_57, (((safe_lshift_func_int16_t_s_s((l_141 = (l_61 &= (safe_add_func_uint32_t_u_u(0x0568E968L, l_66[0])))), g_58)) || 251UL) != l_142))) != g_108), g_105[0]))) && l_57) & l_66[0])), 2)), g_2[2]));
            --l_144;
        }
    }
    return g_147;
}



static int16_t  func_4(int64_t  p_5, const uint64_t  p_6)
{ 
    int64_t l_31 = 0x14F5C6F0D602FF7ALL;
    g_30[0][2] = p_6;
    return l_31;
}



static const int32_t  func_9(int32_t  p_10, int16_t  p_11, uint32_t  p_12, uint32_t  p_13, int32_t  p_14)
{ 
    for (p_12 = 29; (p_12 <= 50); p_12 = safe_add_func_int32_t_s_s(p_12, 8))
    { 
        --g_22[3];
        g_27 |= ((((safe_mod_func_int32_t_s_s(g_2[2], p_10)) , (-1L)) < 0x6BL) | 0x3421AD7BA966896ELL);
    }
    return g_2[2];
}



static int16_t  func_34(const int64_t  p_35, int32_t  p_36, uint32_t  p_37)
{ 
    int32_t l_56 = (-1L);
    l_56 = (g_21[0] || g_18);
    return p_36;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_30[i][j], "g_30[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_100[i][j][k], "g_100[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_116[i][j][k].f0, "g_116[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
