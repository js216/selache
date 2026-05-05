// SPDX-License-Identifier: MIT
// cctest_csmith_08966a0d.c --- cctest case csmith_08966a0d (csmith seed 144075277)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4c4ce8bb */

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

// Options:   -s 144075277 -o /tmp/csmith_gen_h5p74fh4/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_3[1][4] = {{0x4F833FCBL,0x4F833FCBL,0x4F833FCBL,0x4F833FCBL}};
static uint8_t g_17[1][3] = {{2UL,2UL,2UL}};
static int32_t g_44 = 0xCEA0262BL;
static uint32_t g_53 = 0x131A3A4AL;
static uint8_t g_62 = 0xD6L;
static int64_t g_82 = 0L;
static uint64_t g_83[3][2] = {{0x2939A49A9C08A916LL,0x2939A49A9C08A916LL},{0x2939A49A9C08A916LL,0x2939A49A9C08A916LL},{0x2939A49A9C08A916LL,0x2939A49A9C08A916LL}};
static int64_t g_165 = 1L;
static uint8_t g_168 = 1UL;
static int32_t g_171 = 1L;
static uint32_t g_183[4][1] = {{4294967294UL},{0UL},{4294967294UL},{0UL}};
static uint8_t g_211 = 1UL;
static int32_t g_215[2][2] = {{0xD36E1F28L,0xD36E1F28L},{0xD36E1F28L,0xD36E1F28L}};
static int32_t g_217 = (-9L);
static int64_t g_222[3][2] = {{0xFA615A5E883FB5D4LL,(-6L)},{(-6L),0xFA615A5E883FB5D4LL},{(-6L),(-6L)}};
static int32_t g_223 = 0x968D2024L;
static int64_t g_224 = 1L;
static uint32_t g_228[1][4] = {{0xEAEE7164L,0xEAEE7164L,0xEAEE7164L,0xEAEE7164L}};
static int8_t g_242 = 0xC0L;
static uint32_t g_248 = 0x642D96FBL;



static int8_t  func_1(void);
static int32_t  func_7(int8_t  p_8, int32_t  p_9, int16_t  p_10, const int8_t  p_11);
static int32_t  func_12(uint32_t  p_13);




static int8_t  func_1(void)
{ 
    const int16_t l_2[1] = {(-8L)};
    uint32_t l_256 = 4294967286UL;
    int32_t l_257 = 0x1FE12C45L;
    int32_t l_261 = 0x8DEAA391L;
    int i;
    if (l_2[0])
    { 
        uint64_t l_6 = 0x3D4210E164CAF14CLL;
        int32_t l_253 = 0x4AF0A9B8L;
lbl_252:
        for (g_3[0][2] = 0; (g_3[0][2] < 8); ++g_3[0][2])
        { 
            uint32_t l_249 = 0xF60C1CC4L;
            if ((l_6 >= 8L))
            { 
                if (g_3[0][3])
                    break;
            }
            else
            { 
                const int16_t l_16 = 0L;
                g_248 = func_7((func_12((safe_lshift_func_int16_t_s_u((((l_16 || (0UL <= g_17[0][2])) < l_2[0]) <= g_3[0][2]), g_17[0][2]))) && l_16), l_6, l_6, l_2[0]);
                if (g_44)
                    goto lbl_252;
            }
            ++l_249;
        }
        l_253 = g_228[0][3];
    }
    else
    { 
        for (g_248 = 0; (g_248 < 27); g_248 = safe_add_func_uint64_t_u_u(g_248, 5))
        { 
            if (g_3[0][2])
                break;
        }
    }
    l_257 = l_256;
    l_261 |= ((~l_2[0]) != (((l_2[0] ^ ((safe_rshift_func_int8_t_s_u((l_257 || g_3[0][2]), 2)) != 0x61E3L)) >= g_3[0][2]) <= g_223));
    return l_256;
}



static int32_t  func_7(int8_t  p_8, int32_t  p_9, int16_t  p_10, const int8_t  p_11)
{ 
    uint64_t l_238[1][2];
    int32_t l_241 = 0x8982D4E4L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_238[i][j] = 0x95C9495E14DD7467LL;
    }
    if ((!((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_238[0][1], (((l_241 = ((((g_183[1][0] != ((safe_mod_func_uint32_t_u_u((((p_10 != l_238[0][1]) <= g_217) , g_217), 0x2B7FD2DEL)) && l_238[0][1])) , g_82) >= l_238[0][0]) , 0xF1L)) & 0x4DL) ^ l_238[0][1]))), l_238[0][0])), p_11)) > p_9)))
    { 
        uint32_t l_243 = 0x016B4405L;
        l_243 = g_242;
    }
    else
    { 
        for (g_62 = (-29); (g_62 != 36); g_62 = safe_add_func_uint8_t_u_u(g_62, 5))
        { 
            for (p_9 = 0; (p_9 != 7); p_9++)
            { 
                if (g_3[0][2])
                    break;
            }
        }
    }
    return g_53;
}



static int32_t  func_12(uint32_t  p_13)
{ 
    int64_t l_36 = 1L;
    const int32_t l_37 = 0xF451DBA1L;
    int16_t l_38[3];
    int32_t l_39 = 0x98072F25L;
    int32_t l_40 = 0xE2AD21DDL;
    uint32_t l_50 = 0UL;
    uint8_t l_105[4][4] = {{0x98L,0xE9L,0xE9L,0x98L},{0xE9L,0x98L,0xE9L,0xE9L},{0x98L,0x98L,0xD2L,0x98L},{0x98L,0xE9L,0xD2L,0xE9L}};
    uint32_t l_106 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_38[i] = 0xCC90L;
    l_40 = (safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((l_39 ^= ((((((safe_mul_func_int16_t_s_s(0x5878L, (((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((l_36 & l_37), l_36)), g_3[0][2])), l_38[1])) && g_3[0][1]) , p_13))) , 0x09D0L) < g_3[0][0]) == 0x83C17A3FL) || p_13) | l_38[1])), l_37)) == g_17[0][2]), p_13)), 5)), g_3[0][2])), p_13));
    for (l_40 = 0; (l_40 <= 0); l_40 += 1)
    { 
        uint32_t l_56[1][2];
        int32_t l_57 = 7L;
        int32_t l_74 = 0xEF58E71DL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_56[i][j] = 0x47845337L;
        }
        for (l_39 = 0; (l_39 <= 0); l_39 += 1)
        { 
            int32_t l_47 = 0xB3E24019L;
            g_44 = (safe_mul_func_uint16_t_u_u((~g_3[0][2]), p_13));
            l_50 = (0x2C91L ^ ((((((safe_sub_func_int64_t_s_s(l_47, (safe_mul_func_uint16_t_u_u((l_39 != 0x67AFL), g_44)))) || g_17[0][2]) & l_47) != g_17[0][1]) == p_13) , g_17[0][2]));
            g_53 ^= (safe_add_func_int64_t_s_s(p_13, g_3[0][3]));
            for (l_47 = 0; (l_47 >= 0); l_47 -= 1)
            { 
                l_57 = ((safe_sub_func_int8_t_s_s(((p_13 | ((-6L) ^ (((0x28CDD50170A2C9EALL && 0x9F6D65DBDCDB7A89LL) > l_56[0][1]) != p_13))) != 0x202DL), g_53)) < p_13);
            }
        }
        for (g_53 = 0; (g_53 <= 0); g_53 += 1)
        { 
            int32_t l_60 = 0xD15FFE8FL;
            int32_t l_61[1][4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_61[i][j] = 0xDEECC15CL;
            }
            for (l_50 = 0; (l_50 <= 0); l_50 += 1)
            { 
                int i, j;
                l_57 &= (((((l_56[l_50][l_40] , 1L) > (((safe_mul_func_uint16_t_u_u((g_17[l_50][(l_50 + 2)] == p_13), g_17[0][1])) == 0x47L) , 0x18F8C21E6DB759FFLL)) > p_13) > g_17[l_50][(l_50 + 2)]) ^ g_3[0][2]);
                --g_62;
                if (p_13)
                    break;
            }
        }
        for (l_57 = 0; (l_57 <= 0); l_57 += 1)
        { 
            int8_t l_67 = 0x05L;
            if ((g_3[0][2] && (safe_mod_func_int32_t_s_s(1L, (1UL || l_67)))))
            { 
                int32_t l_75 = 0L;
                int i, j;
                l_75 = ((p_13 <= ((l_39 = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u(255UL, ((l_74 = (g_62 = (g_17[l_40][(l_57 + 2)] = 0x36L))) , p_13))) == l_56[0][1]), g_3[0][2])), l_36))) & g_3[0][2])) , 1L);
            }
            else
            { 
                g_83[0][0] = ((((safe_lshift_func_uint16_t_u_s(((g_82 ^= ((l_67 | ((0x63B6BA6FL < (safe_lshift_func_uint16_t_u_u(((l_39 = (safe_mul_func_uint16_t_u_u(g_17[0][2], g_17[0][2]))) > p_13), p_13))) != l_67)) >= p_13)) < 0xB31BL), l_37)) <= 0x31AC79CC16C4145FLL) <= l_74) > p_13);
            }
            return p_13;
        }
    }
    if (((safe_mod_func_uint64_t_u_u(p_13, p_13)) , p_13))
    { 
        uint32_t l_89 = 0xA2966C64L;
        int32_t l_90[1];
        int32_t l_107[2][4] = {{(-1L),0xBDFDF764L,(-1L),(-1L)},{0xBDFDF764L,0xBDFDF764L,0x1B67BCF5L,0xBDFDF764L}};
        int8_t l_191 = (-1L);
        int i, j;
        for (i = 0; i < 1; i++)
            l_90[i] = 0x43BFD272L;
lbl_182:
        if (((((l_39 = 0x74L) , ((p_13 || (((l_40 &= (safe_div_func_int64_t_s_s((g_82 |= (((((safe_unary_minus_func_int64_t_s((0UL <= p_13))) , (-3L)) & (-4L)) && p_13) < l_89)), l_89))) , l_89) == p_13)) != l_89)) ^ l_38[0]) <= l_37))
        { 
            l_107[0][3] = ((g_53--) , (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((((l_90[0] ^= 3UL) < (!(safe_lshift_func_int16_t_s_s(((!65535UL) | ((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_62 <= l_105[1][2]), g_17[0][2])), g_17[0][2])) , 0x0EL)), 5)))) , l_106), l_89)), 13)));
        }
        else
        { 
            int32_t l_108 = 0x39C3AD06L;
            int32_t l_109 = (-1L);
            int32_t l_110 = 0L;
            uint32_t l_111[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_111[i][j] = 0xD25F9EFAL;
            }
            ++l_111[0][0];
            l_40 = 0L;
        }
        for (l_50 = 0; (l_50 <= 2); l_50 += 1)
        { 
            int32_t l_151 = 0x53720512L;
            int32_t l_167[3];
            int i;
            for (i = 0; i < 3; i++)
                l_167[i] = 1L;
            if ((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_38[l_50] == (1L != 0L)), g_53)), l_38[l_50])))
            { 
                int16_t l_152 = (-4L);
                int32_t l_164 = 8L;
                int32_t l_166 = (-10L);
                l_107[0][3] ^= (((safe_add_func_int8_t_s_s((l_40 = ((safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(g_3[0][1], (safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((l_152 = (l_151 |= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((((l_90[0] &= (((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((g_62--), ((safe_sub_func_uint8_t_u_u((+((-6L) < (safe_lshift_func_int16_t_s_s(0x6D64L, 7)))), p_13)) == l_38[l_50]))) != l_38[l_50]), g_17[0][2])), p_13)) , p_13) < l_37)) && p_13) , 255UL) & 0x4FL), l_89)), 13)))), g_3[0][3])) & p_13), 0xE00AB68978726BC3LL)))), 0L)), p_13)) < p_13) >= l_38[l_50]), 3)) || 0L)), p_13)) >= g_82) || 0x4F39L);
                l_39 = (safe_mul_func_int8_t_s_s(((((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((2L >= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(g_83[2][0], (l_50 >= g_17[0][2]))), l_152))), l_90[0])), 15)) & l_152))) == 255UL) | g_44) <= g_17[0][2]), 0xB8L));
                --g_168;
            }
            else
            { 
                g_171 &= (((p_13 && ((0xC1710171L <= g_168) & p_13)) <= 4L) != 0x835FL);
            }
            if (g_53)
                break;
            for (l_36 = 0; (l_36 <= 1); l_36 += 1)
            { 
                uint32_t l_180 = 0UL;
                int32_t l_181 = 0x8FD62B9EL;
                int i, j;
                l_107[l_36][(l_36 + 2)] = (safe_mod_func_uint8_t_u_u((((g_165 = (g_82 = (safe_rshift_func_uint16_t_u_s(l_38[1], 3)))) > (l_39 ^= 0x69C37587FDEBD733LL)) != (safe_mul_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s((l_180 = 0xBAL), p_13)) ^ l_181) == g_3[0][2]) > 1UL), (-2L)))), p_13));
                if (l_40)
                    goto lbl_182;
                --g_183[1][0];
            }
        }
        g_171 = (((l_40 = (safe_rshift_func_int16_t_s_u(((g_17[0][2] || (((0x087EL & ((!(((safe_lshift_func_int8_t_s_s((p_13 || g_62), 6)) == (-1L)) , 0xD2L)) , 0x5B45L)) <= (-1L)) > p_13)) < l_191), l_105[0][1]))) == p_13) || g_82);
    }
    else
    { 
        uint16_t l_206 = 0xFB85L;
        int64_t l_207 = 0x6BAA5DA81958DDEBLL;
        int32_t l_210 = (-1L);
        int32_t l_214 = 3L;
        int32_t l_216 = (-1L);
        int32_t l_218[2];
        uint16_t l_225 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_218[i] = 0x1A335962L;
        l_40 &= ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(0x15DE77700A42C73BLL, (safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((l_36 && (safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s((l_106 || g_183[1][0]), 0xADL))))))), g_17[0][0])))), l_206)), 6)), l_207)) > l_207);
        for (g_168 = 0; (g_168 > 25); g_168++)
        { 
            int32_t l_219 = 0xEAD068D1L;
            int32_t l_220 = 0x75997CB8L;
            int32_t l_221[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_221[i][j] = 0x7FF8EE6FL;
            }
            if (g_183[3][0])
                break;
            ++g_211;
            l_225++;
        }
        ++g_228[0][2];
    }
    return p_13;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_83[i][j], "g_83[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_183[i][j], "g_183[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_215[i][j], "g_215[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_217, "g_217", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_222[i][j], "g_222[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_228[i][j], "g_228[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
